from django.shortcuts import render, redirect
from django.http import HttpResponse
from .models import LongToShort
# Create your views here.

def helloWorld(request):
    return HttpResponse("Hello, in phase 1 of learning django")

def Home_Page(request):
    # print(request.META) #prints all the details of the user
    context={"error":False, 
    "submitted":False,    
    }
    print(request.method)
    if request.method=="POST":
        data=request.POST
        # print(data)
        longurl = data['longurl']
        customname=data['custom_name']
        # print(longurl, customname)
        
        
        try:
            obj=LongToShort(long_url=longurl, custom_name=customname)
            obj.save()
            context['submitted']=True
            context["long_url"]=longurl
            context["custom_name"]=request.build_absolute_uri() + customname
            customname=request.build_absolute_uri() + customname
            context["date"]=obj.created_date
            context["visited"]=obj.visit_count
        except:
            context['error']=True
            print("Failed")

    return render(request, "index.html", context)

def redirect_url(request, customname):
    row = LongToShort.objects.filter(custom_name=customname)
    if len(row)==0:
        return HttpResponse('This endpoint dosen\'t exist! Error ')
    obj=row[0]
    long_url=obj.long_url
    obj.visit_count+=1
    obj.save()
    return redirect(long_url)


def analytics(request):
    rows=LongToShort.objects.all()
    context={
        "rows":rows
    }
    return render(request, "analytics.html" , context)


def task(request):
    context={
        'name' : ['Meow', 'Abc', 'Meow2'],
        'company' : 'Akamai'
    }
    return render(request,"task.html", context)