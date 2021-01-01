#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<string.h>
//******** addonedigit FUNCTION TO ADD ONE DIGIT NUMBERS **********
void addonedigit()
{
  int gd=0,gm,r,num1,num2,sum,x,y,k;
  char str1[3],str2[3],str3[3],ch;
  do
  {
   initgraph(&gd,&gm," ");
   settextstyle(1,0,8);
   setcolor(4);
   cout<<"Enter first number:-";
   cin>>num1;
   cout<<"Enter second number:-";
   cin>>num2;
   sum=num1+num2;
   r=(num1%10) + 48;
   str1[0]=r;
   str1[1]=NULL;
   r=(num2%10) + 48;
   str2[0]=r;
   str2[1]=NULL;
   setcolor(4);
   delay(500);
   outtextxy(200,120,str1);
   delay(500);
   outtextxy(200,220,str2);
   delay(500);
   outtextxy(100,220," + ");
   line(100,320,300,320);
   for(x=400,k=0;x<600,k<str1[0]-48;x++,k++)
   {
	setcolor(15);
	outtextxy(x,120,"|");
	x+=20;
	delay(300);
   }
   for(x=400,k=0;x<600,k<str2[0]-48;x++,k++)
   {
	setcolor(15);
	outtextxy(x,220,"|");
	x+=20;
	delay(300);
   }
   for(x=400,k=0;x<600,k<str1[0]-48;x++,k++)
   {
	setcolor(14);
	outtextxy(x,120,"|");
	x+=20;
	delay(300);
   }
   for(x=400,k=0;x<600,k<str2[0]-48;x++,k++)
   {
	setcolor(14);
	outtextxy(x,220,"|");
	x+=20;
	delay(300);
   }
   if(sum<10)
   {
      r=(sum%10) + 48;
      str3[0]=r;
      str3[1]=NULL;
      setcolor(14);
      delay(500);
      outtextxy(200,320,str3);
   }
   else
   {
      r=(sum%10) + 48;
      str3[1]=r;
      r=sum/10 + 48;
      str3[0]=r;
      str3[2]=NULL;
      setcolor(14);
      delay(500);
      outtextxy(150,320,str3);
   }
   settextstyle(1,0,3);
   outtextxy(20,420,"Press 0 for exit or Press any other key to continue .");
   ch=getche();
   if(ch!='0')
   {
       closegraph();
   }
   else
   {
       cleardevice();
   }
  }while(ch!='0');
}

//******** addtwodigit FUNCTION TO ADD TWO DIGIT NUMBERS **********
void addtwodigit()
{
  clrscr();
  int gd=0,gm;
  int num1,num2,sum,r,r1,x,y,k,sum1,sum2;
  char str1[3],str2[3],a[3],b[3],c[3],d[3],ch;
  do
  {
    initgraph(&gd,&gm," ");
    settextstyle(1,0,8);
    setcolor(4);
    cout<<"Enter first number :- ";
    cin>>num1;
    cout<<"Enter second number :- ";
    cin>>num2;
    sum=num1+num2;
    r = (num1%10)+48;
    str1[1]=r;
    r=num1/10+48;
    str1[0]=r;
    str1[2]=NULL;
    r = (num2%10)+48;
    str2[1]=r;
    r=num2/10+48;
    str2[0]=r;
    str2[2]=NULL;
    if(sum<99)
    {
       r = (sum%10)+48;
       a[0]=r;
       a[1]=NULL;
       r=sum/10+48;
       b[0]=r;
       b[1]=NULL;
    }
    else
    {
       r = (sum%10)+48;
       a[0]=r;
       a[1]=NULL;
       r= (sum%100);
       b[0]=r/10 +48;
       b[1]=NULL;
       r=sum/100 +48;
       c[0]=r;
       c[1]=NULL;
    }
    outtextxy(200,220," + ");
    line(200,320,400,320);
    delay(400);
    outtextxy(300,120,str1);
    delay(400);
    outtextxy(300,220,str2);
    for(x=400,k=0;x<600,k<str1[1] - 48;x++,k++)
    {
	 setcolor(15);
	 outtextxy(x,120," | ");
	 x+=20;
	 delay(200);
    }
    for(x=400,k=0;x<600,k<str2[1] - 48;x++,k++)
    {
	 setcolor(15);
	 outtextxy(x,220," | ");
	 x+=20;
	 delay(200);
    }
    for(x=400,k=0;x<600,k<str1[1] - 48;x++,k++)
    {
	 setcolor(14);
	 outtextxy(x,120," | ");
	 x+=20;
	 delay(200);
    }
    for(x=400,k=0;x<600,k<str2[1] - 48;x++,k++)
    {
	 setcolor(14);
	 outtextxy(x,220," | ");
	 x+=20;
	 delay(200);
    }
    delay(400);
    outtextxy(350,320,a);
    sum1 =(str1[1]-48) + (str2[1]-48);
    if(sum1>9)
    {
	r1=(sum1/10) +48;
	d[0]=r1;
	d[1]=NULL;
	delay(300);
	setcolor(15);
	settextstyle(1,0,5);
	outtextxy(310,80,d);
	settextstyle(1,0,8);
    }
    for(x=180,k=0;x>0,k<str1[0] - 48;x--,k++)
    {
	 setcolor(15);
	 outtextxy(x,120," | ");
	 x-=20;
	 delay(200);
    }
    for(x=180,k=0;x>0,k<str2[0] - 48;x--,k++)
    {
	 setcolor(15);
	 outtextxy(x,220," | ");
	 x-=20;
	 delay(200);
    }

    for(x=180,k=0;x>0,k<str1[0] - 48;x--,k++)
    {
	 setcolor(14);
	 outtextxy(x,120," | ");
	 x-=20;
	 delay(300);
    }
    for(x=180,k=0;x>0,k<str2[0] - 48;x--,k++)
    {
	 setcolor(14);
	 outtextxy(x,220," | ");
	 x-=20;
	 delay(300);
    }
    delay(400);
    outtextxy(300,320,b);
    if(sum>99)
    {
      delay(100);
      delay(400);
      outtextxy(250,320,c);
    }
    settextstyle(1,0,3);
    outtextxy(20,420,"Press 0 for exit or Press any other key to continue .");
    ch=getche();
    if(ch!='0')
    {
       closegraph();
    }
    else
    {
       cleardevice();
    }
  }while(ch!='0');
}

//******** addthreedigit FUNCTION TO ADD THREE DIGIT NUMBERS **********
void addthreedigit()
{
  clrscr();
  int gd=0,gm;
  int num1,num2,sum,r,r1,x,y,k,sum1,sum2;
  char str1[4],str2[4],a[3],b[3],c[3],d[3],e[3],f[3],ch;
  do
  {
    initgraph(&gd,&gm," ");
    settextstyle(1,0,8);
    setcolor(4);
    cout<<"Enter first number :- ";
    cin>>num1;
    cout<<"Enter second number :- ";
    cin>>num2;
    sum=num1+num2;
    r = (num1%10)+48;
    str1[2]=r;
    r=num1%100;
    str1[1]=r/10 +48;
    r=num1/100+48;
    str1[0]=r;
    str1[3]=NULL;
    r = (num2%10)+48;
    str2[2]=r;
    r = num2%100;
    str2[1]=r/10 +48;
    r=num2/100+48;
    str2[0]=r;
    str2[3]=NULL;
    if(sum<1000)
    {
       r = (sum%10)+48;
       a[0]=r;
       a[1]=NULL;
       r = sum%100;
       b[0]=r/10 +48;
       b[1]=NULL;
       r=sum/100+48;
       c[0]=r;
       c[1]=NULL;
    }
    else
    {
       r = (sum%10)+48;
       a[0]=r;
       a[1]=NULL;
       r= (sum%100);
       b[0]=r/10 +48;
       b[1]=NULL;
       r= (sum%1000);
       c[0]=r/100 +48;
       c[1]=NULL;
       r=sum/1000 +48;
       d[0]=r;
       d[1]=NULL;
    }
    setcolor(4);
    outtextxy(200,220," + ");
    line(200,320,500,320);
    outtextxy(300,120,str1);
    outtextxy(300,220,str2);
    for(x=450,k=0;x<650,k<str1[2] - 48;x++,k++)
    {
	 setcolor(15);
	 outtextxy(x,120," | ");
	 x+=20;
	 delay(200);
    }
    for(x=450,k=0;x<650,k<str2[2] - 48;x++,k++)
    {
	 setcolor(15);
	 outtextxy(x,220," | ");
	 x+=20;
	 delay(200);
    }
    for(x=450,k=0;x<650,k<str1[2] - 48;x++,k++)
    {
	 setcolor(14);
	 outtextxy(x,120," | ");
	 x+=20;
	 delay(300);
    }
    for(x=450,k=0;x<650,k<str2[2] - 48;x++,k++)
    {
	 setcolor(14);
	 outtextxy(x,220," | ");
	 x+=20;
	 delay(300);
    }
    outtextxy(400,320,a);
    sum1 =(str1[2]-48) + (str2[2]-48);
    if(sum1>9)
    {
	r1=(sum1/10) +48;
	e[0]=r1;
	e[1]=NULL;
	delay(300);
	settextstyle(1,0,5);
	outtextxy(360,80,e);
	settextstyle(1,0,8);
	delay(50);
    }
    for(x=280,k=0;x<450,k<str1[1] - 48;x++,k++)
    {
	 setcolor(15);
	 outtextxy(x,0," | ");
	 x+=20;
	 delay(200);
    }
    for(x=280,k=0;x<450,k<str2[1] - 48;x++,k++)
    {
	 setcolor(15);
	 outtextxy(x,420," | ");
	 x+=20;
	 delay(200);
    }
    for(x=280,k=0;x<450,k<str1[1] - 48;x++,k++)
    {
	 setcolor(14);
	 outtextxy(x,0," | ");
	 x+=20;
	 delay(200);
    }
    for(x=280,k=0;x<450,k<str2[1] - 48;x++,k++)
    {
	 setcolor(14);
	 outtextxy(x,420," | ");
	 x+=20;
	 delay(200);
    }
    outtextxy(350,320,b);
    sum2 =(str1[1]-48) + (str2[1]-48);
    if(sum2>9)
    {
	r1=(sum2/10) +48;
	f[0]=r1;
	f[1]=NULL;
	settextstyle(1,0,5);
	setcolor(15);
	outtextxy(300,80,f);
	settextstyle(1,0,8);
	delay(50);
    }
    for(x=160,k=0;x>0,k<str1[0] - 48;x--,k++)
    {
	 setcolor(15);
	 outtextxy(x,120," | ");
	 x-=20;
	 delay(200);
    }
    for(x=160,k=0;x>0,k<str2[0] - 48;x--,k++)
    {
	 setcolor(15);
	 outtextxy(x,240," | ");
	 x-=20;
	 delay(200);
    }
    for(x=160,k=0;x>0,k<str1[0] - 48;x--,k++)
    {
	 setcolor(14);
	 outtextxy(x,120," | ");
	 x-=20;
	 delay(200);
    }
    for(x=160,k=0;x>0,k<str2[0] - 48;x--,k++)
    {
	 setcolor(14);
	 outtextxy(x,240," | ");
	 x-=20;
	 delay(200);
    }
    outtextxy(300,320,c);
    if(sum>1000)
    {
      delay(100);
      outtextxy(250,320,d);
    }
    settextstyle(1,0,3);
    outtextxy(20,420,"Press 0 for exit or Press any other key to continue .");
    ch=getche();
    if(ch!='0')
    {
       closegraph();
    }
    else
    {
       cleardevice();
    }
  }while(ch!='0');
}
//******** subonedigit FUNCTION TO SUBTRACT ONE DIGIT NUMBERS **********
void subonedigit()
{
   int gd=0,gm,r,num1,num2,diff,x,y,k;
   char str1[3],str2[3],str3[3],ch;
   do
   {
     initgraph(&gd,&gm," ");
     settextstyle(1,0,8);
     setcolor(4);
     cout<<"Enter first number:-";
     cin>>num1;
     cout<<"Enter second number:-";
     cin>>num2;
     r=num1%10 + 48;
     str1[0]=r;
     str1[1]=NULL;
     r=num2%10 + 48;
     str2[0]=r;
     str2[1]=NULL;
     if(num1>=num2)
     {
       diff=num1 - num2;
       r=diff%10 + 48;
       str3[0]=r;
       str3[1]=NULL;
       outtextxy(200,220," - ");
       line(250,320,370,320);
       outtextxy(300,120,str1);
       delay(200);
       outtextxy(300,220,str2);
       for(x=597,k=0;x>400,k<str1[0]-48;x--,k++)
       {
	   setcolor(4);
	   outtextxy(x,120,"|");
	   x-=20;
	   delay(200);
       }
       settextstyle(1,0,4);
       for(x=575,k=0;x>400,k<str2[0]-48;x--,k++)
       {
	   setcolor(14);
	   outtextxy(x,150," \\ ");
	   x-=20;
	   delay(200);
       }
       for(x=585,k=0;x>400,k<str2[0]-48;x--,k++)
       {
	   setcolor(14);
	   outtextxy(x,150,"/");
	   x-=20;
	   delay(200);
       }
       settextstyle(1,0,8);
       delay(300);
       outtextxy(300,320,str3);
       settextstyle(1,0,3);
       outtextxy(20,420,"Press 0 for exit or Press any other key to continue .");
       ch=getche();
     }
     else
     {
       r=num1%10 + 48;
       str1[0]=r;
       str1[1]=NULL;
       r=num2%10 + 48;
       str2[0]=r;
       str2[1]=NULL;
       setcolor(4);
       outtextxy(0,220," - ");
       line(0,320,300,320);
       outtextxy(100,120,str1);
       outtextxy(100,220,str2);
       delay(300);
       setcolor(14);
       line(100,120,150,320);
       delay(200);
       line(150,120,100,320);
       r=num2%10 + 48;
       str1[0]=r;
       str1[1]=NULL;
       r=num1%10 + 48;
       str2[0]=r;
       str2[1]=NULL;
       setcolor(4);
       outtextxy(150,220," - ");
       line(0,320,350,320);
       outtextxy(250,120,str1);
       outtextxy(250,220,str2);
       setcolor(4);
       outtextxy(150,320,"-");
       setcolor(14);
       r=num1%10 + 48;
       str1[0]=r;
       str1[1]=NULL;
       r=num2%10 + 48;
       str2[0]=r;
       str2[1]=NULL;
       diff=num2 - num1;
       r=diff%10 + 48;
       str3[0]=r;
       str3[1]=NULL;
       for(x=597,k=0;x>400,k<str2[0]-48;x--,k++)
       {
	   setcolor(4);
	   outtextxy(x,120,"|");
	   x-=20;
	   delay(200);
       }
       settextstyle(1,0,4);
       for(x=575,k=0;x>400,k<str1[0]-48;x--,k++)
       {
	   setcolor(14);
	   outtextxy(x,150," \\ ");
	   x-=20;
	   delay(200);
       }
       for(x=585,k=0;x>400,k<str1[0]-48;x--,k++)
       {
	   setcolor(14);
	   outtextxy(x,150,"/");
	   x-=20;
	   delay(200);
       }
       delay(300);
       settextstyle(1,0,8);
       outtextxy(250,320,str3);
       settextstyle(1,0,3);
       outtextxy(20,420,"Press 0 for exit or Press any other key to continue .");
       ch=getche();
     }
     if(ch!='0')
     {
       closegraph();
     }
     else
     {
       cleardevice();
     }
   }while(ch!='0');
}
//******** subtwodigit FUNCTION TO SUBTRACT TWO DIGIT NUMBERS **********
void subtwodigit()
{
  int gd=0,gm,r,num1,num2,diff,x,y,k,check,check1;
  char str1[3],str2[3],str3[3],str4[3],a[3],b[3],c[3],ch;
  do
  {
   initgraph(&gd,&gm," ");
   settextstyle(1,0,8);
   setcolor(4);
   cout<<"Enter first number:-";
   cin>>num1;
   cout<<"Enter second number:-";
   cin>>num2;
   if(num1>=num2)
   {
       r=num1%10 + 48;
       str1[1]=r;
       r=num1/10 + 48;
       str1[0]=r;
       str1[2]=NULL;
       r=num2%10 + 48;
       str2[1]=r;
       r=num2/10 + 48;
       str2[0]=r;
       str2[2]=NULL;
       outtextxy(200,220," - ");
       line(200,320,450,320);
       outtextxy(300,120,str1);
       delay(100);
       outtextxy(300,220,str2);
       if(str1[1]>=str2[1])
       {
	  diff=(str1[1]-48) - (str2[1]-48);
	  r=diff%10 + 48;
	  a[0]=r;
	  a[1]=NULL;
	  for(x=597,k=0;x>400,k<str1[1]-48;x--,k++)
	  {
	    setcolor(4);
	    outtextxy(x,120,"|");
	    x-=20;
	    delay(200);
	  }
	  settextstyle(1,0,4);
	  for(x=575,k=0;x>400,k<str2[1]-48;x--,k++)
	  {
	    setcolor(14);
	    outtextxy(x,150," \\ ");
	    x-=20;
	    delay(200);
	  }
	  for(x=585,k=0;x>400,k<str2[1]-48;x--,k++)
	  {
	    setcolor(14);
	    outtextxy(x,150,"/");
	    x-=20;
	    delay(200);
	  }
	  delay(300);
	  settextstyle(1,0,8);
	  outtextxy(350,320,a);
       }
       else
       {
	  diff=(str1[1]-48+10) - (str2[1]-48);
	  check=4;
	  setcolor(15);
	  delay(350);
	  outtextxy(350,120,"/");
	  settextstyle(1,0,4);
	  str3[0]=49;
	  str3[1]=str1[1];
	  str3[2]=NULL;
	  delay(500);
	  outtextxy(350,80,str3);
	  settextstyle(1,0,8);
	  r=diff%10 + 48;
	  a[0]=r;
	  a[1]=NULL;
	  for(x=597,k=0;x>400,k<str1[1]-48+10;x--,k++)
	  {
	    setcolor(4);
	    outtextxy(x,120,"|");
	    x-=20;
	    delay(200);
	  }
	  settextstyle(1,0,4);
	  for(x=575,k=0;x>400,k<str2[1]-48;x--,k++)
	  {
	    setcolor(14);
	    outtextxy(x,150," \\ ");
	    x-=20;
	    delay(200);
	  }
	  for(x=585,k=0;x>400,k<str2[1]-48;x--,k++)
	  {
	    setcolor(14);
	    outtextxy(x,150,"/");
	    x-=20;
	    delay(200);
	  }
	  delay(400);
	  settextstyle(1,0,8);
	  outtextxy(350,320,a);
       }
       if(str1[0]>=str2[0])
       {
	if(check==4)
	{
	    diff=(str1[0]-48-1) - (str2[0]-48);
	    setcolor(15);
	    delay(300);
	    outtextxy(300,120,"/");
	    settextstyle(1,0,4);
	    str4[0]=str1[0]-1;
	    str4[1]=NULL;
	    delay(500);
	    outtextxy(300,80,str4);
	    settextstyle(1,0,8);
	    r=diff%10 + 48;
	    b[0]=r;
	    b[1]=NULL;
	    for(x=177,k=0;x>0,k<str4[0]-48;x--,k++)
	    {
	      setcolor(4);
	      outtextxy(x,120,"|");
	      x-=20;
	      delay(200);
	    }
	    settextstyle(1,0,4);
	    for(x=155,k=0;x>0,k<str2[0]-48;x--,k++)
	    {
	      setcolor(14);
	      outtextxy(x,150," \\ ");
	      x-=20;
	      delay(200);
	    }
	    for(x=165,k=0;x>0,k<str2[0]-48;x--,k++)
	    {
	      setcolor(14);
	      outtextxy(x,150,"/");
	      x-=20;
	      delay(200);
	    }
	    delay(400);
	    settextstyle(1,0,8);
	    outtextxy(300,320,b);
	}
	else
	{
	    diff=(str1[0]-48) - (str2[0]-48);

	    r=diff%10 + 48;
	    b[0]=r;
	    b[1]=NULL;
	    for(x=177,k=0;x>0,k<str1[0]-48;x--,k++)
	    {
	      setcolor(4);
	      outtextxy(x,120,"|");
	      x-=20;
	      delay(200);
	    }
	    settextstyle(1,0,4);
	    for(x=155,k=0;x>0,k<str2[0]-48;x--,k++)
	    {
	      setcolor(14);
	      outtextxy(x,150," \\ ");
	      x-=20;
	      delay(200);
	    }
	    for(x=165,k=0;x>0,k<str2[0]-48;x--,k++)
	    {
	      setcolor(14);
	      outtextxy(x,150,"/");
	      x-=20;
	      delay(200);
	    }
	    delay(400);
	    settextstyle(1,0,8);
	    outtextxy(300,320,b);
	}
       }
       settextstyle(1,0,3);
       outtextxy(20,420,"Press 0 for exit or Press any other key to continue .");
       ch=getche();
     }
     else
     {
       setcolor(4);
       r=num1%10 + 48;
       str1[1]=r;
       r=num1/10 + 48;
       str1[0]=r;
       str1[2]=NULL;
       r=num2%10 + 48;
       str2[1]=r;
       r=num2/10 + 48;
       str2[0]=r;
       str2[2]=NULL;
       outtextxy(100,220," - ");
       line(100,320,300,320);
       outtextxy(200,120,str1);
       delay(200);
       outtextxy(200,220,str2);
       delay(200);
       setcolor(14);
       line(200,120,300,320);
       delay(200);
       line(300,120,200,320);
       setcolor(4);
       r=num2%10 + 48;
       str1[1]=r;
       r=num2/10 + 48;
       str1[0]=r;
       str1[2]=NULL;
       r=num1%10 + 48;
       str2[1]=r;
       r=num1/10 + 48;
       str2[0]=r;
       str2[2]=NULL;
       setcolor(5);
       line(300,320,500,320);
       delay(200);
       outtextxy(300,120,str1);
       delay(200);
       outtextxy(300,220,str2);
       delay(200);
       setcolor(14);
       outtextxy(200,320,"-");
       r=num1%10 + 48;
       str1[1]=r;
       r=num1/10 + 48;
       str1[0]=r;
       str1[2]=NULL;
       r=num2%10 + 48;
       str2[1]=r;
       r=num2/10 + 48;
       str2[0]=r;
       str2[2]=NULL;
       if(str1[1]>str2[1])
       {
	  diff=(str2[1]+10-48) - (str1[1]-48);
	  check=4;
	  setcolor(15);
	  delay(300);
	  outtextxy(350,120,"/");
	  settextstyle(1,0,4);
	  str3[0]=49;
	  str3[1]=str2[1];
	  str3[2]=NULL;
	  delay(400);
	  outtextxy(350,80,str3);
	  settextstyle(1,0,8);
	  r=diff%10 + 48;
	  a[0]=r;
	  a[1]=NULL;
	  for(x=597,k=0;x>400,k<str3[1]-48+10;x--,k++)
	  {
	    setcolor(4);
	    outtextxy(x,120,"|");
	    x-=10;
	    delay(200);
	  }
	  settextstyle(1,0,4);
	  for(x=575,k=0;x>400,k<str1[1]-48;x--,k++)
	  {
	    setcolor(14);
	    outtextxy(x,150," \\ ");
	    x-=10;
	    delay(200);
	  }
	  delay(400);
	  settextstyle(1,0,8);
	  outtextxy(350,320,a);
       }
       else
       {
	  diff=(str2[1]-48) - (str1[1]-48);
	  r=diff%10 + 48;
	  a[0]=r;
	  a[1]=NULL;
	  for(x=597,k=0;x>400,k<str2[1]-48;x--,k++)
	  {
	    setcolor(4);
	    outtextxy(x,120,"|");
	    x-=10;
	    delay(200);
	  }
	  settextstyle(1,0,4);
	  for(x=575,k=0;x>400,k<str1[1]-48;x--,k++)
	  {
	    setcolor(14);
	    outtextxy(x,150," \\ ");
	    x-=10;
	    delay(200);
	  }
	  delay(400);
	  settextstyle(1,0,8);
	  outtextxy(350,320,a);
       }
       if(check==4)
       {
	  diff=(str2[0]-48-1) - (str1[0]-48);

	  setcolor(15);
	  delay(300);
	  outtextxy(300,120,"/");
	  settextstyle(1,0,4);
	  str4[0]=str2[0]-1;
	  str4[1]=NULL;
	  delay(400);
	  outtextxy(310,80,str4);
	  settextstyle(1,0,8);
	  r=diff%10 + 48;
	  b[0]=r;
	  b[1]=NULL;

	  for(x=107,k=0;x>0,k<str2[0]-48-1;x--,k++)
	  {
	    setcolor(4);
	    outtextxy(x,120,"|");
	    x-=10;
	    delay(200);
	  }
	  settextstyle(1,0,4);
	  for(x=85,k=0;x>0,k<str1[0]-48;x--,k++)
	  {
	    setcolor(14);
	    outtextxy(x,150," \\ ");
	    x-=10;
	    delay(200);
	  }
	  delay(400);
	  settextstyle(1,0,8);
	  outtextxy(300,320,b);
       }
       else
       {
	  diff=(str2[0]-48) - (str1[0]-48);
	  r=diff%10 + 48;
	  b[0]=r;
	  b[1]=NULL;
	  for(x=107,k=0;x>0,k<str2[0]-48;x--,k++)
	  {
	    setcolor(4);
	    outtextxy(x,120,"|");
	    x-=10;
	    delay(200);
	  }
	  settextstyle(1,0,4);
	  for(x=85,k=0;x>0,k<str1[0]-48;x--,k++)
	  {
	    setcolor(14);
	    outtextxy(x,150," \\ ");
	    x-=10;
	    delay(200);
	  }
	  delay(500);
	  settextstyle(1,0,8);
	  outtextxy(300,320,b);
       }
       settextstyle(1,0,3);
       outtextxy(20,420,"Press 0 for exit or Press any other key to continue .");
       ch=getche();
     }
     if(ch!='0')
     {
       closegraph();
     }
     else
     {
       cleardevice();
     }
  }while(ch!='0');
}
//******** subthreedigit FUNCTION TO SUBTRACT THREE DIGIT NUMBERS **********
void subthreedigit()
{
   int gd=0,gm,r,
   num1,num2,diff,x,y,k,y1,check,check1,check2;
   char str1[4],str2[4],str3[4],str4[4],str5[4],a[3],b[3],c[3],ch;
   do
   {
     initgraph(&gd,&gm," ");
     settextstyle(1,0,8);
     setcolor(4);
     cout<<"Enter first number:-";
     cin>>num1;
     cout<<"Enter second number:-";
     cin>>num2;
     r=num1%10 + 48;
     str1[2]=r;
     r=num1%100;
     str1[1]=r/10 +48;
     r=num1/100 + 48;
     str1[0]=r;
     str1[3]=NULL;
     r=num2%10 + 48;
     str2[2]=r;
     r=num2%100;
     str2[1]=r/10 +48;
     r=num2/100 + 48;
     str2[0]=r;
     str2[3]=NULL;
     if(num1>num2)
     {
       outtextxy(150,220," - ");
       line(150,320,450,320);
       delay(200);
       outtextxy(250,120,str1);
       delay(200);
       outtextxy(250,220,str2);
       setcolor(14);
       if(str1[2]>=str2[2])
       {
	  diff=(str1[2]-48) - (str2[2]-48);
	  r=diff%10 + 48;
	  a[0]=r;
	  a[1]=NULL;
	  delay(500);
	  settextstyle(1,0,8);
	  outtextxy(350,320,a);
       }
       else
       {
	  diff=(str1[2]-48+10) - (str2[2]-48);
	  check=4;
	  setcolor(15);
	  delay(500);
	  outtextxy(350,120,"/");
	  settextstyle(1,0,4);
	  str3[0]=49;
	  str3[1]=str1[2];
	  str3[2]=NULL;
	  delay(500);
	  outtextxy(350,80,str3);
	  settextstyle(1,0,8);
	  r=diff%10 + 48;
	  a[0]=r;
	  a[1]=NULL;
	  setcolor(14);
	  delay(500);
	  settextstyle(1,0,8);
	  outtextxy(350,320,a);
       }
       if(str1[1]>=str2[1])
       {
	 if(check==4)
	 {
	  if((str1[1]-1)>=(str2[1]))
	  {
	    diff=(str1[1]-48-1) - (str2[1]-48);
	    setcolor(15);
	    delay(500);
	    outtextxy(300,120,"/");
	    settextstyle(1,0,4);
	    str4[0]=str1[1]-1;
	    str4[1]=NULL;
	    delay(500);
	    outtextxy(300,80,str4);
	    settextstyle(1,0,8);
	    r=diff%10 + 48;
	    b[0]=r;
	    b[1]=NULL;
	    setcolor(14);
	    delay(500);
	    settextstyle(1,0,8);
	    outtextxy(300,320,b);
	  }
	  else
	  {
	    diff=(str1[1]-48-1+10) - (str2[1]-48);
	    check1=5;
	    setcolor(15);
	    delay(500);
	    outtextxy(300,120,"/");
	    settextstyle(1,0,4);
	    str4[0]=49;
	    str4[1]=str1[1]-1;
	    str4[2]=NULL;
	    delay(500);
	    outtextxy(300,80,str4);
	    settextstyle(1,0,8);
	    r=diff%10 + 48;
	    b[0]=r;
	    b[1]=NULL;
	    setcolor(14);
	    settextstyle(1,0,8);
	    delay(500);
	    outtextxy(300,320,b);
	  }
	 }
	 else
	 {
	    diff=(str1[1]-48) - (str2[1]-48);
	    r=diff%10 + 48;
	    b[0]=r;
	    b[1]=NULL;
	    delay(500);
	    settextstyle(1,0,8);
	    outtextxy(300,320,b);
	 }
       }
       else
       {
	 if(check==4)
	 {
	    diff=(str1[1]-48+10-1) - (str2[1]-48);
	    check1=5;
	    setcolor(15);
	    delay(500);
	    outtextxy(300,120,"/");
	    settextstyle(1,0,4);
	    str4[0]=49;
	    str4[1]=str1[1]-1;
	    str4[2]=NULL;
	    delay(500);
	    outtextxy(300,80,str4);
	    settextstyle(1,0,8);
	    r=diff%10 + 48;
	    b[0]=r;
	    b[1]=NULL;
	    setcolor(14);
	    delay(500);
	    settextstyle(1,0,8);
	    outtextxy(300,320,b);
	 }
	 else
	 {
	    diff=(str1[1]-48+10) - (str2[1]-48);
	    check1=5;
	    setcolor(15);
	    delay(500);
	    outtextxy(300,120,"/");
	    settextstyle(1,0,4);
	    str4[0]=49;
	    str4[1]=str1[1];
	    str4[2]=NULL;
	    delay(500);
	    outtextxy(300,80,str4);
	    settextstyle(1,0,8);
	    r=diff%10 + 48;
	    b[0]=r;
	    b[1]=NULL;
	    setcolor(14);
	    settextstyle(1,0,8);
	    delay(500);
	    outtextxy(300,320,b);
	 }
       }
       if(str1[0]>str2[0])
       {
	  if(check1==5)
	  {
	    diff=(str1[0]-48-1) - (str2[0]-48);
	    setcolor(15);
	    delay(500);
	    outtextxy(250,120,"/");
	    settextstyle(1,0,4);
	    str5[0]=str1[0]-1;
	    str5[1]=NULL;
	    delay(500);
	    outtextxy(250,80,str5);
	    settextstyle(1,0,8);
	    r=diff%10 + 48;
	    c[0]=r;
	    c[1]=NULL;
	    setcolor(14);
	    settextstyle(1,0,8);
	    delay(500);
	    outtextxy(250,320,c);
	  }
	  else
	  {
	    diff=(str1[0]-48) - (str2[0]-48);
	    r=diff%10 + 48;
	    c[0]=r;
	    c[1]=NULL;
	    setcolor(14);
	    settextstyle(1,0,8);
	    delay(500);
	    outtextxy(250,320,c);
	  }
       }
       settextstyle(1,0,3);
       outtextxy(20,420,"Press 0 for exit or Press any other key to continue .");
       ch=getche();
     }
     else
     {
       outtextxy(0,220," - ");
       line(0,320,300,320);
       outtextxy(100,120,str1);
       outtextxy(100,220,str2);
       setcolor(14);
       delay(500);
       line(100,120,250,320);
       delay(500);
       line(250,120,100,320);
       setcolor(4);
       delay(500);
       outtextxy(300,220,"-");
       line(300,320,600,320);
       outtextxy(400,120,str2);
       delay(500);
       outtextxy(400,220,str1);
       delay(500);
       outtextxy(300,320,"-");
       setcolor(14);
       if(str1[2]>=str2[2])
       {
	  if(str1[2]==str2[2])
	  {
	    diff=(str2[2]-48) - ( str1[2]-48);
	    r=diff%10 + 48;
	    a[0]=r;
	    a[1]=NULL;
	    delay(500);
	    settextstyle(1,0,8);
	    outtextxy(500,320,a);
	  }
	  else
	  {
	    diff=(str2[2]-48+10) - (str1[2]-48);
	    check=4;
	    setcolor(15);
	    delay(500);
	    outtextxy(500,120,"/");
	    settextstyle(1,0,4);
	    str3[0]=49;
	    str3[1]=str2[2];
	    str3[2]=NULL;
	    delay(500);
	    outtextxy(500,80,str3);
	    settextstyle(1,0,8);
	    r=diff%10 + 48;
	    a[0]=r;
	    a[1]=NULL;
	    setcolor(14);
	    settextstyle(1,0,8);
	    delay(500);
	    outtextxy(500,320,a);
	  }
       }
       else
       {
	  diff=(str2[2]-48) - (str1[2]-48);
	  r=diff%10 + 48;
	  a[0]=r;
	  a[1]=NULL;
	  settextstyle(1,0,8);
	  delay(500);
	  outtextxy(500,320,a);
       }
       if(str1[1]>=str2[1])
       {
	 if(check==4)
	 {
	  if(str2[1]-1==str1[1])
	  {
	     diff=(str2[1]-48-1) - (str1[1]-48);
	     r=diff%10 + 48;
	     b[0]=r;
	     b[1]=NULL;
	     setcolor(14);
	     delay(500);
	     outtextxy(450,320,b);
	  }
	  else
	  {
	     diff=(str2[1]+10-48-1) - (str1[1]-48);
	     check1=5;
	     setcolor(15);
	     delay(500);
	     outtextxy(450,120,"/");
	     settextstyle(1,0,4);
	     str4[0]=49;
	     str4[1]=str2[1]-1;
	     str4[2]=NULL;
	     delay(500);
	     outtextxy(450,80,str4);
	     settextstyle(1,0,8);
	     r=diff%10 + 48;
	     b[0]=r;
	     b[1]=NULL;
	     setcolor(14);
	     delay(500);
	     outtextxy(450,320,b);
	   }
	 }
	 else
	 {
	   if(str2[1]==str1[1])
	   {
	      diff=(str2[1]-48) - (str1[1]-48);
	      r=diff%10 + 48;
	      b[0]=r;
	      b[1]=NULL;
	      setcolor(14);
	      delay(500);
	      outtextxy(450,320,b);
	   }
	   else
	   {
	      diff=(str2[1]+10-48) - (str1[1]-48);
	      check1=5;
	      setcolor(15);
	      delay(500);
	      outtextxy(450,120,"/");
	      settextstyle(1,0,4);
	      str4[0]=49;
	      str4[1]=str2[1];
	      str4[2]=NULL;
	      delay(500);
	      outtextxy(450,80,str4);
	      settextstyle(1,0,8);
	      r=diff%10 + 48;
	      b[0]=r;
	      b[1]=NULL;
	      setcolor(14);
	      delay(500);
	      outtextxy(450,320,b);
	   }
	 }
       }
       else
       {
	 if(check==4)
	 {
	  diff=(str2[1]-48-1) - (str1[1]-48);
	  setcolor(15);
	  delay(500);
	  outtextxy(450,120,"/");
	  settextstyle(1,0,4);
	  str4[0]=str2[1]-1;
	  str4[1]=NULL;
	  delay(500);
	  outtextxy(450,80,str4);
	  settextstyle(1,0,8);
	  r=diff%10 + 48;
	  b[0]=r;
	  b[1]=NULL;
	  setcolor(14);
	  delay(500);
	  outtextxy(450,320,b);
	 }
	 else
	 {
	  diff=(str2[1]-48) - (str1[1]-48);
	  r=diff%10 + 48;
	  b[0]=r;
	  b[1]=NULL;
	  setcolor(14);
	  delay(500);
	  outtextxy(450,320,b);
	 }
       }
       if(check1==5)
       {
	 diff=(str2[0]-48-1) - (str1[0]-48);
	 setcolor(15);
	 delay(500);
	 outtextxy(400,120,"/");
	 settextstyle(1,0,4);
	 str5[0]=str2[0]-1;
	 str5[1]=NULL;
	 delay(500);
	 outtextxy(400,80,str5);
	 settextstyle(1,0,8);
	 r=diff%10 + 48;
	 c[0]=r;
	 c[1]=NULL;
	 setcolor(14);
	 delay(500);
	 outtextxy(400,320,c);
       }
       else
       {
	 diff=(str2[0]-48) - (str1[0]-48);
	 r=diff%10 + 48;
	 c[0]=r;
	 c[1]=NULL;
	 setcolor(14);
	 delay(500);
	 outtextxy(400,320,c);
       }
       ch=getche();
       settextstyle(1,0,3);
       outtextxy(20,420,"Press 0 for exit or Press any other key to continue .");
     }
     if(ch!='0')
     {
       closegraph();
     }
     else
     {
       cleardevice();
     }
  }while(ch!='0');
}
//******** multiplyone FUNCTION TO MULTIPLY ONE DIGIT NUMBERS **********
void multiplyone()
{
   int gd=0,gm,r,num1,num2,mul,x,y,k,y1,check1,check2,check3,check4,num3;
   int mul1,mul2,mul3,mul4,mul5,mul6,mul7,mul8,c1,c2,c3,c4;
   char str1[4],str2[4],str3[4],str4[4],str5[4],str6[4],a[3],b[3],c[3],ch;
   do
   {
     check1=0;check2=0;check3=0;check4=0;c1=0;c2=0;c3=0;
     initgraph(&gd,&gm," ");
     settextstyle(1,0,8);
     setcolor(4);
     cout<<"Enter first number:-";
     cin>>num1;
     cout<<"Enter 1-digit second number:-";
     cin>>num2;
     if(num1>=0 && num1<10)
     {
	num3=num2;
	r=num1%10 + 48;
	str1[0]=r;
	str1[1]=NULL;
	check1=1;
     }
     else if(num1>=10 && num1<100)
     {
	num3=num2;
	r=num1%10 + 48;
	str1[1]=r;
	r=num1%100;
	str1[0]=r/10 +48;
	str1[2]=NULL;
	check2=1;
     }
     else if(num1>=100 && num1<1000)
     {
	num3=num2;
	r=num1%10 + 48;
	str1[2]=r;
	r=num1%100;
	str1[1]=r/10 +48;
	r=num1/100 + 48;
	str1[0]=r;
	str1[3]=NULL;
	check3=1;
     }
     else if(num1>=1000)
     {
	r=num1%10 + 48;
	str1[3]=r;
	r=num1%100;
	str1[2]=r/10 + 48;
	r=num1%1000;
	str1[1]=r/100 + 48;
	num3=num2;
	r=num1/1000 + 48;
	str1[0]=r;
	str1[4]=NULL;
	check4=1;
     }

     r=(num3 % 10) + 48;
     str2[0]=r;
     str2[1]=NULL;
     settextstyle(1,0,8);
     setcolor(4);
     delay(400);
     outtextxy(250,80,str1);
     if(num1>=0 && num1<10)
     {
	delay(400);
	outtextxy(250,160,str2);
	delay(100);
	outtextxy(150,160," x ");
	delay(200);
	line(150,250,350,250);
     }
     else if(num1>=10 && num1<100)
     {
	delay(400);
	outtextxy(300,160,str2);
	delay(100);
	outtextxy(200,160," x ");
	delay(200);
	line(150,250,400,250);
     }
     else if(num1>=100 && num1<1000)
     {
	delay(400);
	outtextxy(350,160,str2);
	delay(100);
	outtextxy(250,160," x ");
	delay(200);
	line(150,250,450,250);
     }
     else if(num1>=1000)
     {
	delay(400);
	outtextxy(400,160,str2);
	delay(100);
	outtextxy(300,160," x ");
	delay(200);
	line(150,250,500,250);
     }
     if(check1==1)
     {
	mul=num1*num3;
	setcolor(14);
	delay(200);
	line(50,60,450,60);
	delay(200);
	line(450,60,450,370);
	delay(200);
	line(450,370,50,370);
	delay(200);
	line(50,60,50,370);
	if(mul<10)
	{
	   r=mul%10 + 48;
	   str3[0]=r;
	   str3[1]=NULL;
	   delay(400);
	   outtextxy(250,250,str3);
	}
	else
	{
	   r=mul%10 + 48;
	   str3[1]=r;
	   r=mul/10 + 48;
	   str3[0]=r;
	   str3[2]=NULL;
	   delay(400);
	   outtextxy(200,250,str3);
	}
     }
     if(check2==1)
     {
       setcolor(14);
       delay(200);
       line(50,40,500,40);
       delay(200);
       line(500,40,500,370);
       delay(200);
       line(500,370,50,370);
       delay(200);
       line(50,370,50,40);
       setcolor(4);
       mul=num1*num3;
       mul1 = (str1[1]-48) * (str2[0]-48);
       if(mul1>=10)
       {
	   r=mul1/10 + 48;
	   a[0]=r;
	   a[1]=NULL;
	   settextstyle(1,0,5);
	   setcolor(15);
	   delay(400);
	   outtextxy(250,40,a);
	   settextstyle(1,0,8);
	   delay(50);
	   c1=1;
       }
       r=mul1%10 + 48;
       str3[0]=r;
       str3[1]=NULL;
       setcolor(14);
       delay(400);
       outtextxy(300,250,str3);
       delay(200);
       mul2=(str1[0]-48) * (str2[0]-48);
       if(c1==1)
       {
	   mul2=mul2 + a[0]-48;
       }
       if(mul2>=10)
       {
	      r=mul2%10 + 48;
	      str4[1]=r;
	      r=mul2/10 + 48;
	      str4[0]=r;
	      str4[2]=NULL;
	      setcolor(14);
	      delay(400);
	      outtextxy(200,250,str4);
	      delay(200);
       }
       else
       {
	      r=mul2%10 + 48;
	      str4[0]=r;
	      str4[1]=NULL;
	      setcolor(14);
	      delay(400);
	      outtextxy(250,250,str4);
	      delay(200);
       }
     }
     if(check3==1)
     {
	  setcolor(14);
	  delay(200);
	  line(50,40,550,40);
	  delay(200);
	  line(550,40,550,370);
	  delay(200);
	  line(550,370,50,370);
	  delay(200);
	  line(50,370,50,40);
	  setcolor(4);
	  mul=num1*num3;
	  mul1=(str1[2]-48) * (str2[0]-48);
	  if(mul1>=10)
	  {
	     r=mul1/10 + 48;
	     a[0]=r;
	     a[1]=NULL;
	     setcolor(15);
	     settextstyle(1,0,5);
	     delay(400);
	     outtextxy(310,40,a);
	     settextstyle(1,0,8);
	     c1=1;
	  }
	  r=mul1%10 + 48;
	  str3[0]=r;
	  str3[1]=NULL;
	  setcolor(14);
	  delay(400);
	  outtextxy(350,250,str3);
	  mul2=(str1[1]-48) * (str2[0]-48);
	  if(c1==1)
	  {
	     mul2=mul2 + a[0]-48;
	  }
	  if(mul2>=10)
	  {
	     r=mul2/10 + 48;
	     b[0]=r;
	     b[1]=NULL;
	     setcolor(15);
	     settextstyle(1,0,5);
	     delay(400);
	     outtextxy(260,40,b);
	     settextstyle(1,0,8);
	     c2=1;
	  }
	  r=mul2%10 + 48;
	  str4[0]=r;
	  str4[1]=NULL;
	  setcolor(14);
	  delay(400);
	  outtextxy(300,250,str4);
	  mul3=(str1[0]-48) * (str2[0]-48);
	  if(c2==1)
	  {
	     mul3=mul3 + b[0]-48;
	  }
	  if(mul3>=10)
	  {
	     r=mul3%10 + 48;
	     str5[1]=r;
	     r=mul3/10 + 48;
	     str5[0]=r;
	     str5[2]=NULL;
	     setcolor(14);
	     delay(400);
	     outtextxy(200,250,str5);
	  }
	  else
	  {
	     r=mul3%10 + 48;
	     str5[0]=r;
	     str5[1]=NULL;
	     setcolor(14);
	     delay(400);
	     outtextxy(250,250,str5);
	  }
     }
     if(check4==1)
     {
	   setcolor(14);
	   delay(200);
	   line(50,40,600,40);
	   delay(200);
	   line(600,40,600,370);
	   delay(200);
	   line(600,370,50,370);
	   delay(200);
	   line(50,370,50,40);
	   setcolor(4);
	   mul=num1*num3;
	   mul1=(str1[3]-48) * (str2[0]-48);
	   if(mul1>=10)
	   {
	      r=mul1/10 + 48;
	      a[0]=r;
	      a[1]=NULL;
	      setcolor(15);
	      settextstyle(1,0,5);
	      delay(400);
	      outtextxy(360,40,a);
	      settextstyle(1,0,8);
	      c1=1;
	   }
	   r=mul1%10 + 48;
	   str3[0]=r;
	   str3[1]=NULL;
	   setcolor(14);
	   delay(400);
	   outtextxy(400,250,str3);
	   mul2=(str1[2]-48) * (str2[0]-48);
	   if(c1==1)
	   {
	      mul2=mul2 + a[0]-48;
	   }
	   if(mul2>=10)
	   {
	      r=mul2/10 + 48;
	      b[0]=r;
	      b[1]=NULL;
	      setcolor(15);
	      settextstyle(1,0,5);
	      delay(400);
	      outtextxy(310,40,b);
	      settextstyle(1,0,8);
	      c2=1;
	   }
	   r=mul2%10 + 48;
	   str4[0]=r;
	   str4[1]=NULL;
	   setcolor(14);
	   delay(400);
	   outtextxy(350,250,str4);
	   mul3=(str1[1]-48) * (str2[0]-48);
	   if(c2==1)
	   {
	      mul3=mul3 + b[0]-48;
	   }
	   if(mul3>=10)
	   {
	      r=mul3/10 + 48;
	      c[0]=r;
	      c[1]=NULL;
	      setcolor(15);
	      settextstyle(1,0,5);
	      delay(400);
	      outtextxy(260,40,c);
	      settextstyle(1,0,8);
	      c3=1;
	   }
	   r=mul3%10 + 48;
	   str5[0]=r;
	   str5[1]=NULL;
	   setcolor(14);
	   delay(400);
	   outtextxy(300,250,str5);
	   mul4=(str1[0]-48) * (str2[0]-48);
	   if(c3==1)
	   {
	      mul4=mul4 + c[0]-48;
	   }
	   if(mul4>=10)
	   {
	      r=mul4%10 + 48;
	      str6[1]=r;
	      r=mul4/10 + 48;
	      str6[0]=r;
	      str6[2]=NULL;
	      setcolor(14);
	      delay(400);
	      outtextxy(200,250,str6);
	   }
	   else
	   {
	      r=mul4%10 + 48;
	      str6[0]=r;
	      str6[1]=NULL;
	      setcolor(14);
	      delay(400);
	      outtextxy(250,250,str6);
	   }
     }
     settextstyle(1,0,2);
     setcolor(15);
     outtextxy(50,400,"Press 0 for exit or Press any other key to continue .");
     ch=getche();
     if(ch!='0')
     {
	 closegraph();
     }
     else
     {
	 cleardevice();
     }
   }while(ch!='0');
}
//******** multiplytwo FUNCTION TO MULTIPLY BY TWO DIGIT NUMBER **********
void multiplytwo()
{
   int gd=0,gm,r,num1,num2,mul,x,y,k,y1,check1,check2,check3,check4,num3;
   int mul1,mul2,mul3,mul4,mul5,mul6,mul7,mul8;
   int c1,c2,c3,c4,c5,c6,c7,c8,c9,c10;
   int s1,s2,s3,s4,s5;
   char str1[4],str2[4],str3[4],str4[4],str5[4],str6[4],str7[4],str8[4],str9[4],str10[4],str11[4],str12[4],str13[4],str14[4],str15[4];
   char a[3],b[3],c[3],d[3],e[3],f[3],g[3],h[3],i[3],j[3],ch;
   do
   {
     check1=0;check2=0;check3=0;check4=0;
     c1=0;c2=0;c3=0;c4=0;c5=0;c6=0;c7=0;c8=0;
     s1=0;s2=0;s3=0;s4=0;s5=0;
     initgraph(&gd,&gm," ");
     settextstyle(1,0,8);
     setcolor(4);
     fflush(stdin);
     cout<<"Enter first number:-";
     cin>>num1;
     cout<<"Enter 2-digit second number:-";
     cin>>num2;
     if(num1>=0 && num1<10)
     {
	num3=num2;
	r=num1%10 + 48;
	str1[0]=r;
	str1[1]=NULL;
	check1=1;
     }
     else if(num1>=10 && num1<100)
     {
	num3=num2;
	r=(num1%10) + 48;
	str1[1]=r;
	r=(num1/10) + 48;
	str1[0]=r;
	str1[2]=NULL;
	check2=1;
     }
     else if(num1>=100 && num1<1000)
     {
	num3=num2;
	r=(num1%10) + 48;
	str1[2]=r;
	r=(num1%100);
	str1[1]=r/10 + 48;
	r=(num1/100) + 48;
	str1[0]=r;
	str1[3]=NULL;
	check3=1;
     }
     else if(num1>=1000)
     {
	r=(num1%10) + 48;
	str1[3]=r;
	r=(num1%100) ;
	str1[2]=r/10 + 48;
	r=(num1%1000) ;
	str1[1]=r/100 + 48;
	num3=num2;
	r=(num1/1000) + 48;
	str1[0]=r;
	str1[4]=NULL;
	check4=1;
     }
     r=(num3 % 10) + 48;
     str2[1]=r;
     r=(num3 / 10) +48;
     str2[0]=r;
     str2[2]=NULL;
     settextstyle(1,0,7);
     setcolor(4);
     delay(400);
     outtextxy(250,50,str1);
     if(num1>=0 && num1<10)
     {
	delay(400);
	outtextxy(210,120,str2);
	delay(100);
	outtextxy(130,120," x ");
	delay(200);
	line(150,200,350,200);
	setcolor(15);
	delay(200);
	line(300,120,360,120);
	line(300,130,360,130);
	line(355,115,365,125);
	line(355,135,365,125);
	delay(200);
	outtextxy(400,50,str2);
	outtextxy(440,120,str1);
	outtextxy(400,120,"x");
	line(330,200,530,200);
     }
     else if(num1>=10 && num1<100)
     {
	delay(400);
	outtextxy(250,110,str2);
	delay(100);
	outtextxy(170,110," x ");
	delay(200);
	line(150,180,350,180);
     }
     else if(num1>=100 && num1<1000)
     {
	delay(400);
	outtextxy(290,110,str2);
	delay(100);
	outtextxy(210,110," x ");
	delay(200);
	line(150,180,400,180);
     }
     else if(num1>=1000)
     {
	delay(400);
	outtextxy(330,110,str2);
	delay(100);
	outtextxy(250,110," x ");
	delay(200);
	line(150,180,450,180);
     }
     if(check1==1)
     {
	mul=(str1[0]-48) * (str2[1]-48);
	setcolor(14);
	delay(200);
	line(50,30,620,30);
	delay(200);
	line(620,30,620,370);
	delay(200);
	line(620,370,50,370);
	delay(200);
	line(50,370,50,30);
	if(mul>=10)
	{
	   r=mul/10 + 48;
	   a[0]=r;
	   a[1]=NULL;
	   delay(400);
	   settextstyle(1,0,4);
	   outtextxy(400,30,a);
	   settextstyle(1,0,7);
	   c1=1;
	}
	r=mul%10 + 48;
	str3[0]=r;
	str3[1]=NULL;
	delay(400);
	outtextxy(440,220,str3);
	mul1=(str1[0]-48) * (str2[0]-48);
	if(c1==1)
	{
	   mul1=mul1 + a[0]-48;
	}
	if(mul1<10)
	{
	   r=mul1%10 + 48;
	   str4[0]=r;
	   str4[1]=NULL;
	   delay(300);
	   outtextxy(400,220,str4);
	}
	else
	{
	   r=mul1%10 + 48;
	   str4[1]=r;
	   r=mul1/10 + 48;
	   str4[0]=r;
	   str4[2]=NULL;
	   delay(300);
	   outtextxy(360,220,str4);
	}
     }
     if(check2==1)
     {
       setcolor(14);
       delay(200);
       line(50,40,500,40);
       delay(200);
       line(500,40,500,400);
       delay(200);
       line(500,400,50,400);
       delay(200);
       line(50,400,50,40);
       setcolor(4);
       mul=num1*num3;
       mul1 = (str1[1]-48) * (str2[1]-48);
       if(mul1>=10)
       {
	   r=mul1/10 + 48;
	   a[0]=r;
	   a[1]=NULL;
	   settextstyle(1,0,3);
	   setcolor(15);
	   delay(400);
	   outtextxy(255,35,a);
	   settextstyle(1,0,7);
	   delay(50);
	   c1=1;
       }
       r=mul1%10 + 48;
       str3[0]=r;
       str3[1]=NULL;
       setcolor(14);
       delay(400);
       outtextxy(290,190,str3);
       delay(200);
       mul2=(str1[0]-48) * (str2[1]-48);
       if(c1==1)
       {
	   mul2=mul2 + (a[0]-48);
       }
       if(mul2>=10)
       {
	   r=(mul2%10) + 48;
	   str4[1]=r;
	   r=(mul2/10) + 48;
	   str4[0]=r;
	   str4[2]=NULL;
	   setcolor(14);
	   delay(400);
	   outtextxy(210,190,str4);
	   delay(200);
       }
       else
       {
	   r=(mul2%10) + 48;
	   str4[0]=r;
	   str4[1]=NULL;
	   setcolor(14);
	   delay(400);
	   outtextxy(250,190,str4);
	   delay(200);
       }
       outtextxy(290,250,"x");
       delay(400);
       setcolor(0);
       settextstyle(1,0,3);
       outtextxy(255,35,a);
       setcolor(14);
       settextstyle(1,0,7);
       delay(400);
       mul3=(str1[1]-48) * (str2[0]-48);
       if(mul3>=10)
       {
	   r=mul3/10 + 48;
	   b[0]=r;
	   b[1]=NULL;
	   settextstyle(1,0,4);
	   setcolor(15);
	   delay(400);
	   outtextxy(255,30,b);
	   setcolor(14);
	   settextstyle(1,0,7);
	   c2=1;
       }
       r=mul3%10 + 48;
       str5[0]=r;
       str5[1]=NULL;
       delay(400);
       outtextxy(250,250,str5);
       mul4=(str1[0]-48) * (str2[0]-48);
       if(c2==1)
       {
	   mul4=mul4 + (b[0]-48);
       }
       if(mul4>=10)
       {
	   r=(mul4%10) + 48;
	   str6[1]=r;
	   r=(mul4/10) + 48;
	   str6[0]=r;
	   str6[2]=NULL;
	   delay(400);
	   outtextxy(170,250,str6);
       }
       else
       {
	   r=(mul4%10) + 48;
	   str6[0]=r;
	   str6[1]=NULL;
	   delay(400);
	   outtextxy(210,250,str6);
       }
       setcolor(4);
       delay(400);
       line(150,320,350,320);
       setcolor(10);
       settextstyle(7,0,7);
       outtextxy(290,310,str3);
       if(str4[2]==NULL)
       {
	   s1=(str4[1]-48) + (str5[0]-48);
	   if(s1>=10)
	   {
	      r=(s1/10) + 48;
	      c[0]=r;
	      c[1]=NULL;
	      settextstyle(1,0,3);
	      setcolor(15);
	      outtextxy(215,180,c);
	      settextstyle(7,0,7);
	      setcolor(10);
	      c3=1;
	   }
	   r=(s1%10) + 48;
	   str7[0]=r;
	   str7[1]=NULL;
	   outtextxy(250,310,str7);
	   if(str6[2]==NULL)
	   {
	      s2=(str4[0]-48) + (str6[1]-48);
	      if(c3==1)
	      {
		 s2=s2+(c[0]-48);
	      }
	      cout<<s2;
	      if(s2>=10)
	      {
		  r=(s2/10) + 48;
		  d[0]=r;
		  d[1]=NULL;
		  settextstyle(1,0,3);
		  setcolor(15);
		  outtextxy(170,180,d);
		  settextstyle(7,0,7);
		  setcolor(10);
		  c4=1;
	      }
	      r=(s2%10) + 48;
	      str8[0]=r;
	      str8[1]=NULL;
	      outtextxy(210,310,str8);
	      s3=str6[0]-48;
	      if(c4==1)
	      {
		 s3=s3+(d[0]-48);
	      }
	      if(s3>=10)
	      {
		 r=(s3%10) + 48;
		 str9[1]=r;
		 r=(s3/10) + 48;
		 str9[0]=r;
		 str9[2]=NULL;
		 outtextxy(130,310,str9);
	      }
	      else
	      {
		 r=(s3%10) + 48;
		 str9[0]=r;
		 str9[1]=NULL;
		 outtextxy(170,310,str9);
	      }
	   }
	   else
	   {
	      s2=(str4[0]-48) + (str6[0]-48);
	      if(c3==1)
	      {
		 s2=s2+(d[0]-48);
	      }
	      if(s2>=10)
	      {
		 r=(s2%10) + 48;
		 str8[1]=r;
		 r=(s2/10) + 48;
		 str8[0]=r;
		 str8[2]=NULL;
		 outtextxy(170,310,str8);
	      }
	      else
	      {
		 r=(s2%10) + 48;
		 str8[0]=r;
		 str8[1]=NULL;
		 outtextxy(210,310,str8);
	      }
	   }
       }
       else if(str4[1]==NULL)
       {
	   s1=(str4[0]-48) + (str5[0]-48);
	   if(s1>=10)
	   {
	      r=s1/10 + 48;
	      c[0]=r;
	      c[1]=NULL;
	      settextstyle(1,0,3);
	      setcolor(15);
	      outtextxy(215,215,c);
	      settextstyle(7,0,7);
	      setcolor(10);
	      c3=1;
	   }
	   r=s1%10 + 48;
	   str7[0]=r;
	   str7[1]=NULL;
	   outtextxy(250,310,str7);
	   if(str6[2]==NULL)
	   {
	       s2=str6[1]-48 ;
	       if(c3==1)
	       {
		   s2=s2+(c[0]-48);
	       }
	       if(s2>=10)
	       {
		   r=s2/10 + 48;
		   d[0]=r;
		   d[1]=NULL;
		   settextstyle(1,0,3);
		   setcolor(15);
		   outtextxy(215,280,c);
		   settextstyle(7,0,7);
		   setcolor(10);
		   c4=1;
	       }
	       r=s2%10 + 48;
	       str8[0]=r;
	       str8[1]=NULL;
	       outtextxy(210,310,str8);
	       s3=str6[0]-48;
	       if(c4==1)
	       {
		  s3=s3 + d[0]-48;
	       }
	       if(s3>=10)
	       {
		  r=s3%10 +48;
		  str9[1]=r;
		  r=s3/10 +48;
		  str9[0]=r;
		  str9[2]=NULL;
		  outtextxy(130,310,str9);
	       }
	       else
	       {
		  r=s3%10 +48;
		  str9[0]=r;
		  str9[1]=NULL;
		  outtextxy(170,310,str9);
	       }
	   }
	   else if(str6[1]==NULL)
	   {
	       s2=str6[0]-48;
	       if(c3==1)
	       {
		   s2=s2+(c[0]-48);
	       }
	       settextstyle(7,0,7);
	       setcolor(10);
	       if(s2>=10)
	       {
		   r=s2%10 +48;
		   str8[1]=r;
		   r=s2/10 +48;
		   str8[0]=r;
		   str8[2]=NULL;
	       }
	       else
	       {
		   r=s2%10 + 48;
		   str8[0]=r;
		   str8[1]=NULL;
		   outtextxy(210,310,str8);
	       }
	   }
       }
     }
     if(check3==1)
     {
	  setcolor(14);
	  delay(200);
	  line(50,40,500,40);
	  delay(200);
	  line(500,40,500,400);
	  delay(200);
	  line(500,400,50,400);
	  delay(200);
	  line(50,400,50,40);
	  setcolor(4);
	  mul=num1*num3;
	  mul1=(str1[2]-48) * (str2[1]-48);
	  if(mul1>=10)
	  {
	     r=mul1/10 + 48;
	     a[0]=r;
	     a[1]=NULL;
	     setcolor(15);
	     settextstyle(1,0,3);
	     delay(400);
	     outtextxy(295,35,a);
	     settextstyle(1,0,7);
	     c1=1;
	  }
	  r=mul1%10 + 48;
	  str3[0]=r;
	  str3[1]=NULL;
	  setcolor(14);
	  delay(400);
	  outtextxy(330,190,str3);
	  mul2=(str1[1]-48) * (str2[1]-48);
	  if(c1==1)
	  {
	     mul2=mul2 + a[0]-48;
	  }
	  if(mul2>=10)
	  {
	     r=mul2/10 + 48;
	     b[0]=r;
	     b[1]=NULL;
	     setcolor(15);
	     settextstyle(1,0,3);
	     delay(400);
	     outtextxy(255,35,b);
	     settextstyle(1,0,7);
	     setcolor(14);
	     c2=1;
	  }
	  r=mul2%10 + 48;
	  str4[0]=r;
	  str4[1]=NULL;
	  setcolor(14);
	  delay(400);
	  outtextxy(290,190,str4);
	  mul3=(str1[0]-48) * (str2[1]-48);
	  if(c2==1)
	  {
	     mul3=mul3 + b[0]-48;
	  }
	  if(mul3>=10)
	  {
	     r=mul3%10 + 48;
	     str5[1]=r;
	     r=mul3/10 + 48;
	     str5[0]=r;
	     str5[2]=NULL;
	     setcolor(14);
	     delay(400);
	     outtextxy(210,190,str5);
	  }
	  else
	  {
	     r=mul3%10 + 48;
	     str5[0]=r;
	     str5[1]=NULL;
	     setcolor(14);
	     delay(400);
	     outtextxy(240,190,str5);
	  }
	  setcolor(0);
	  settextstyle(1,0,3);
	  outtextxy(295,35,a);
	  outtextxy(255,35,b);
	  setcolor(14);
	  settextstyle(1,0,7);
	  outtextxy(330,250,"x");
	  mul4=(str1[2]-48) * (str2[0]-48);
	  if(mul4>=10)
	  {
	     r=mul4/10 + 48;
	     c[0]=r;
	     c[1]=NULL;
	     setcolor(15);
	     settextstyle(1,0,3);
	     delay(200);
	     outtextxy(295,35,c);
	     settextstyle(1,0,7);
	     setcolor(14);
	     c3=1;
	  }
	  r=mul4%10 + 48;
	  str6[0]=r;
	  str6[1]=NULL;
	  outtextxy(290,250,str6);
	  mul5=(str1[1]-48) * (str2[0]-48);
	  if(c3==1)
	  {
	      mul5=mul5+c[0]-48;
	  }
	  if(mul5>=10)
	  {
	      r=mul5/10 + 48;
	      d[0]=r;
	      d[1]=NULL;
	      setcolor(15);
	      settextstyle(1,0,3);
	      delay(200);
	      outtextxy(255,35,d);
	      settextstyle(1,0,7);
	      setcolor(14);
	      c4=1;
	  }
	  r=mul5%10 + 48;
	  str7[0]=r;
	  str7[1]=NULL;
	  outtextxy(250,250,str7);
	  mul6=(str1[0]-48) * (str2[0]-48);
	  if(c4==1)
	  {
	      mul6=mul6+d[0]-48;
	  }
	  if(mul6>=10)
	  {
	      r=mul6%10 + 48;
	      str8[1]=r;
	      r=mul6/10 + 48;
	      str8[0]=r;
	      str8[2]=NULL;
	      outtextxy(170,250,str8);
	  }
	  else
	  {
	      r=mul6%10 + 48;
	      str8[0]=r;
	      str8[1]=NULL;
	      outtextxy(210,250,str8);
	  }
	  delay(400);
	  line(150,320,400,320);
	  setcolor(10);
	  settextstyle(7,0,7);
	  outtextxy(330,310,str3);
	  s1=(str4[0]-48) + (str6[0]-48);
	  if(s1>=10)
	  {
	      r=s1/10 + 48;
	      e[0]=r;
	      e[1]=NULL;
	      settextstyle(1,0,3);
	      setcolor(15);
	      outtextxy(255,180,e);
	      settextstyle(7,0,7);
	      setcolor(10);
	      c5=1;
	  }
	  r=s1%10 + 48;
	  str9[0]=r;
	  str9[1]=NULL;
	  outtextxy(290,310,str9);
	  if(str5[2]==NULL)
	  {
	      s2=(str5[1]-48) + (str7[0]-48);
	      if(c5==1)
	      {
		  s2=s2+e[0]-48;
	      }
	      if(s2>=10)
	      {
		  r=s2/10 + 48;
		  f[0]=r;
		  f[1]=NULL;
		  settextstyle(1,0,3);
		  setcolor(15);
		  delay(200);
		  outtextxy(215,180,f);
		  settextstyle(7,0,7);
		  setcolor(10);
		  c6=1;
	      }
	      r=s2%10 + 48;
	      str10[0]=r;
	      str10[1]=NULL;
	      outtextxy(250,310,str10);
	      if(str8[2]==NULL)
	      {
		  s3=(str5[0]-48) + (str8[1]-48);
		  if(c6==1)
		  {
		      s3=s3+f[0]-48;
		  }
		  if(s3>=10)
		  {
		      r=s3/10 + 48;
		      g[0]=r;
		      g[1]=NULL;
		      setcolor(15);
		      settextstyle(1,0,3);
		      delay(200);
		      outtextxy(175,180,g);
		      setcolor(10);
		      settextstyle(7,0,7);
		      c7=1;
		  }
		  r=s3%10 + 48;
		  str11[0]=r;
		  str11[1]=NULL;
		  outtextxy(210,310,str11);
		  s4=str8[0]-48;
		  if(c7==1)
		  {
		      s4=s4+g[0]-48;
		  }
		  if(s4>=10)
		  {
		      r=s4%10 + 48;
		      str12[1]=r;
		      r=s4/10 + 48;
		      str12[0]=r;
		      str12[2]=NULL;
		      outtextxy(130,310,str12);
		  }
		  else
		  {
		      r=s4%10 + 48;
		      str12[0]=r;
		      str12[1]=NULL;
		      outtextxy(170,310,str12);
		  }
	      }
	      else
	      {
		  s3=(str5[0]-48) + (str8[0]-48);
		  if(c6==1)
		  {
		      s3=s3+f[0]-48;
		  }
		  if(s3>=10)
		  {
		      r=s3%10 + 48;
		      str11[1]=r;
		      r=s3/10 + 48;
		      str11[0]=r;
		      str11[2]=NULL;
		      outtextxy(170,310,str11);
		  }
		  else
		  {
		      r=s3%10 + 48;
		      str11[0]=r;
		      str11[1]=NULL;
		      outtextxy(210,310,str11);
		  }
	      }
	  }
	  else if(str5[1]==NULL)
	  {
	      s2=(str5[0]-48) + (str7[0]-48);
	      if(c5==1)
	      {
		  s2=s2+e[0]-48;
	      }
	      if(s2>=10)
	      {
		  r=s2/10 + 48;
		  f[0]=r;
		  f[1]=NULL;
		  setcolor(15);
		  settextstyle(1,0,3);
		  delay(200);
		  outtextxy(215,180,f);
		  setcolor(10);
		  settextstyle(7,0,7);
		  c6=1;
	      }
	      r=s2%10 + 48;
	      str10[0]=r;
	      str10[1]=NULL;
	      outtextxy(250,310,str10);
	      if(str8[2]==NULL)
	      {
		  s3=str8[1]-48;
		  if(c6==1)
		  {
		     s3=s3+f[0]-48;
		  }
		  if(s3>=10)
		  {
		     r=s3/10 + 48;
		     g[0]=r;
		     g[1]=NULL;
		     setcolor(15);
		     settextstyle(1,0,3);
		     delay(200);
		     outtextxy(175,180,g);
		     setcolor(10);
		     settextstyle(7,0,7);
		     c7=1;
		  }
		  r=s3%10 + 48;
		  str11[0]=r;
		  str11[1]=NULL;
		  outtextxy(210,310,str11);
		  s4=str8[0]-48;
		  if(c7==1)
		  {
		      s4=s4+g[0]-48;
		  }
		  if(s4>=10)
		  {
		      r=s4%10 + 48;
		      str12[1]=r;
		      r=s4/10 + 48;
		      str12[0]=r;
		      str12[2]=NULL;
		      outtextxy(130,310,str12);
		  }
		  else
		  {
		      r=s4%10 + 48;
		      str12[0]=r;
		      str12[1]=NULL;
		      outtextxy(170,310,str12);
		  }
	      }
	      else
	      {
		  s3=str8[0]-48;
		  if(c6==1)
		  {
		      s3=s3+f[0]-48;
		  }
		  if(s3>=10)
		  {
		      r=s3%10 + 48;
		      str11[1]=r;
		      r=s3/10 + 48;
		      str11[0]=r;
		      str11[2]=NULL;
		      outtextxy(170,310,str11);
		  }
		  else
		  {
		      r=s3%10 + 48;
		      str11[0]=r;
		      str11[1]=NULL;
		      outtextxy(210,310,str11);
		  }
	      }
	 }
     }
     if(check4==1)
     {
	   setcolor(14);
	   delay(200);
	   line(50,40,550,40);
	   delay(200);
	   line(550,40,550,400);
	   delay(200);
	   line(550,400,50,400);
	   delay(200);
	   line(50,400,50,40);
	   setcolor(4);
	   mul=num1*num3;
	   mul1=(str1[3]-48) * (str2[1]-48);
	   if(mul1>=10)
	   {
	      r=mul1/10 + 48;
	      a[0]=r;
	      a[1]=NULL;
	      setcolor(15);
	      settextstyle(1,0,3);
	      delay(400);
	      outtextxy(335,35,a);
	      settextstyle(1,0,7);
	      c1=1;
	   }
	   r=mul1%10 + 48;
	   str3[0]=r;
	   str3[1]=NULL;
	   setcolor(14);
	   delay(400);
	   outtextxy(370,190,str3);
	   mul2=(str1[2]-48) * (str2[1]-48);
	   if(c1==1)
	   {
	      mul2=mul2 + a[0]-48;
	   }
	   if(mul2>=10)
	   {
	      r=mul2/10 + 48;
	      b[0]=r;
	      b[1]=NULL;
	      setcolor(15);
	      settextstyle(1,0,3);
	      delay(400);
	      outtextxy(295,35,b);
	      settextstyle(1,0,7);
	      c2=1;
	   }
	   r=mul2%10 + 48;
	   str4[0]=r;
	   str4[1]=NULL;
	   setcolor(14);
	   delay(400);
	   outtextxy(330,190,str4);
	   mul3=(str1[1]-48) * (str2[1]-48);
	   if(c2==1)
	   {
	      mul3=mul3 + b[0]-48;
	   }
	   if(mul3>=10)
	   {
	      r=mul3/10 + 48;
	      c[0]=r;
	      c[1]=NULL;
	      setcolor(15);
	      settextstyle(1,0,3);
	      delay(400);
	      outtextxy(255,35,c);
	      settextstyle(1,0,7);
	      c3=1;
	   }
	   r=mul3%10 + 48;
	   str5[0]=r;
	   str5[1]=NULL;
	   setcolor(14);
	   delay(400);
	   outtextxy(290,190,str5);
	   mul4=(str1[0]-48) * (str2[1]-48);
	   if(c3==1)
	   {
	      mul4=mul4 + c[0]-48;
	   }
	   if(mul4>=10)
	   {
	      r=mul4%10 + 48;
	      str6[1]=r;
	      r=mul4/10 + 48;
	      str6[0]=r;
	      str6[2]=NULL;
	      setcolor(14);
	      delay(400);
	      outtextxy(210,190,str6);
	   }
	   else
	   {
	      r=mul4%10 + 48;
	      str6[0]=r;
	      str6[1]=NULL;
	      setcolor(14);
	      delay(400);
	      outtextxy(250,190,str6);
	   }
	   settextstyle(1,0,3);
	   setcolor(0);
	   outtextxy(335,35,a);
	   outtextxy(295,35,b);
	   outtextxy(255,35,c);
	   setcolor(14);
	   settextstyle(1,0,7);
	   outtextxy(370,250,"x");
	   mul5=(str1[3]-48) * (str2[0]-48);
	   if(mul5>=10)
	   {
	      r=mul5/10 + 48;
	      d[0]=r;
	      d[1]=NULL;
	      setcolor(15);
	      settextstyle(1,0,3);
	      delay(200);
	      outtextxy(335,35,d);
	      setcolor(14);
	      settextstyle(1,0,7);
	      c4=1;
	   }
	   r=mul5%10 + 48;
	   str7[0]=r;
	   str7[1]=NULL;
	   outtextxy(330,250,str7);
	   mul6=(str1[2]-48) * (str2[0]-48);
	   if(c4==1)
	   {
	       mul6=mul6+d[0]-48;
	   }
	   if(mul6>=10)
	   {
	       r=mul6/10 + 48;
	       e[0]=r;
	       e[1]=NULL;
	       setcolor(15);
	       settextstyle(1,0,3);
	       delay(200);
	       outtextxy(295,35,e);
	       setcolor(14);
	       settextstyle(1,0,7);
	       c5=1;
	   }
	   r=mul6%10 + 48;
	   str8[0]=r;
	   str8[1]=NULL;
	   outtextxy(290,250,str8);
	   mul7=(str1[1]-48) * (str2[0]-48);
	   if(c5==1)
	   {
	       mul7=mul7+e[0]-48;
	   }
	   if(mul7>=10)
	   {
	       r=mul7/10 + 48;
	       f[0]=r;
	       f[1]=NULL;
	       setcolor(15);
	       settextstyle(1,0,3);
	       delay(200);
	       outtextxy(255,35,f);
	       setcolor(14);
	       settextstyle(1,0,7);
	       c6=1;
	   }
	   r=mul7%10 +48;
	   str9[0]=r;
	   str9[1]=NULL;
	   outtextxy(250,250,str9);
	   mul8=(str1[0]-48) * (str2[0]-48);
	   if(c6==1)
	   {
	       mul8=mul8+f[0]-48;
	   }
	   if(mul8>=10)
	   {
	       r=mul8%10 + 48;
	       str10[1]=r;
	       r=mul8/10 + 48;
	       str10[0]=r;
	       str10[2]=NULL;
	       outtextxy(170,250,str10);
	   }
	   else
	   {
	       r=mul8%10 + 48;
	       str10[0]=r;
	       str10[1]=NULL;
	       outtextxy(210,250,str10);
	   }
	   setcolor(4);
	   delay(400);
	   line(150,320,450,320);
	   setcolor(10);
	   settextstyle(7,0,7);
	   outtextxy(370,310,str3);
	   s1=(str4[0]-48) + (str7[0]-48);
	   if(s1>=10)
	   {
	       r=s1/10 + 48;
	       g[0]=r;
	       g[1]=NULL;
	       setcolor(15);
	       settextstyle(1,0,3);
	       delay(200);
	       outtextxy(295,180,g);
	       setcolor(10);
	       settextstyle(7,0,7);
	       c7=1;
	   }
	   r=s1%10 + 48;
	   str11[0]=r;
	   str11[1]=NULL;
	   outtextxy(330,310,str11);
	   s2=(str5[0]-48) + (str8[0]-48);
	   if(c7==1)
	   {
	       s2=s2+g[0]-48;
	   }
	   if(s2>=10)
	   {
	       r=s2/10 + 48;
	       h[0]=r;
	       h[1]=NULL;
	       setcolor(15);
	       settextstyle(1,0,3);
	       delay(200);
	       outtextxy(255,180,h);
	       setcolor(10);
	       settextstyle(7,0,7);
	       c8=1;
	   }
	   r=s2%10 +48;
	   str12[0]=r;
	   str12[1]=NULL;
	   outtextxy(290,310,str12);
	   if(str6[2]==NULL)
	   {
	       s3=(str6[1]-48) + (str9[0]-48);
	       if(c8==1)
	       {
		   s3=s3+h[0]-48;
	       }
	       if(s3>=10)
	       {
		   r=s3/10 +48;
		   i[0]=r;
		   i[1]=NULL;
		   setcolor(15);
		   settextstyle(1,0,3);
		   delay(200);
		   outtextxy(215,180,i);
		   setcolor(10);
		   settextstyle(7,0,7);
		   c9=1;
	       }
	       r=s3%10 + 48;
	       str13[0]=r;
	       str13[1]=NULL;
	       outtextxy(250,310,str13);
	       if(str10[2]==NULL)
	       {
		   s4=(str6[0]-48) + (str10[1]-48);
		   if(c9==1)
		   {
		      s4=s4+i[0]-48;
		   }
		   if(s4>=10)
		   {
		      r=s4/10 + 48;
		      j[0]=r;
		      j[1]=NULL;
		      setcolor(15);
		      settextstyle(1,0,3);
		      delay(200);
		      outtextxy(175,180,j);
		      setcolor(10);
		      settextstyle(7,0,7);
		      c10=1;
		   }
		   r=s4%10 + 48;
		   str14[0]=r;
		   str14[1]=NULL;
		   outtextxy(210,310,str14);
		   s5=str10[0]-48;
		   if(c10==1)
		   {
		      s5=s5+j[0]-48;
		   }
		   if(s5>=10)
		   {
		      r=s5%10 + 48;
		      str15[1]=r;
		      r=s5/10 + 48;
		      str15[0]=r;
		      str15[2]=NULL;
		      outtextxy(130,310,str15);
		   }
		   else
		   {
		      r=s5%10 + 48;
		      str15[0]=r;
		      str15[1]=NULL;
		      outtextxy(170,310,str15);
		   }
	       }
	       else
	       {
		   s4=(str6[0]-48) + (str10[0]-48);
		   if(c9==1)
		   {
		      s4=s4+i[0]-48;
		   }
		   if(s4>=10)
		   {
		      r=s4%10 + 48;
		      str14[1]=r;
		      r=s4/10 + 48;
		      str14[0]=r;
		      str14[2]=NULL;
		      outtextxy(170,310,str14);
		   }
		   else
		   {
		      r=s4%10 + 48;
		      str14[0]=r;
		      str14[1]=NULL;
		      outtextxy(210,310,str14);
		   }
	       }
	   }
	   else
	   {
	       s3=(str6[0]-48) + (str9[0]-48);
	       if(c8==1)
	       {
		   s3=s3+h[0]-48;
	       }
	       if(s3>=10)
	       {
		   r=s3/10 + 48;
		   i[0]=r;
		   i[1]=NULL;
		   setcolor(15);
		   settextstyle(1,0,3);
		   delay(200);
		   outtextxy(215,180,i);
		   setcolor(10);
		   settextstyle(7,0,7);
		   c9=1;
	       }
	       r=s3%10 + 48;
	       str13[0]=r;
	       str13[1]=NULL;
	       outtextxy(250,310,str13);
	       if(str10[2]==NULL)
	       {
		   s4=str10[1]-48;
		   if(c9==1)
		   {
		      s4=s4+i[0]-48;
		   }
		   if(s4>=10)
		   {
		      r=s4/10 + 48;
		      j[0]=r;
		      j[1]=NULL;
		      setcolor(15);
		      settextstyle(1,0,3);
		      delay(200);
		      outtextxy(175,180,j);
		      setcolor(10);
		      settextstyle(7,0,7);
		      c10=1;
		   }
		   r=s4%10 + 48;
		   str14[0]=r;
		   str14[1]=NULL;
		   outtextxy(210,310,str14);
		   s5=str10[0]-48;
		   if(c10==1)
		   {
		      s5=s5+j[0]-48;
		   }
		   if(s5>=10)
		   {
		      r=s5%10 + 48;
		      str15[1]=r;
		      r=s5/10 + 48;
		      str15[0]=r;
		      str15[2]=NULL;
		      outtextxy(130,310,str15);
		   }
		   else
		   {
		      r=s5%10 + 48;
		      str15[0]=r;
		      str15[1]=NULL;
		      outtextxy(170,310,str15);
		   }
	       }
	       else
	       {
		   s4=str10[0]-48;
		   if(c9==1)
		   {
		      s4=s4+i[0]-48;
		   }
		   if(s4>=10)
		   {
		      r=s4%10 + 48;
		      str14[1]=r;
		      r=s4/10 + 48;
		      str14[0]=r;
		      str14[2]=NULL;
		      outtextxy(170,310,str14);
		   }
		   else
		   {
		      r=s4%10 + 48;
		      str14[0]=r;
		      str14[1]=NULL;
		      outtextxy(210,310,str14);
		   }
	       }
	   }
     }
     settextstyle(1,0,2);
     setcolor(15);
     outtextxy(50,400,"Press 0 for exit or Press any other key to continue .");
     ch=getche();
     if(ch!='0')
     {
	 closegraph();
     }
     else
     {
	 cleardevice();
     }
   }while(ch!='0');
}
//******** divideone FUNCTION TO DIVIDE BY ONE DIGIT NUMBER **********
void divideone()
{
  int gd=0,gm,num1,num2,r,d1,d2,d3,s;
  char s1[4],s2[4],s3[4],s4[4],s5[4],q1[4],q2[4],q3[4],r1[4],r2[4],r3[4];
  char x1[4],x2[4],x3[4],ch;
  do
  {
    initgraph(&gd,&gm," ");
    cout<<"Enter divisor:-";
    cin>>num1;
    cout<<"\nEnter dividend:-";
    cin>>num2;
    r=num1%10 + 48;
    s1[0]=r;
    s1[1]=NULL;
    r=num2%10 + 48;
    s2[0]=r;
    s2[1]=NULL;
    setcolor(10);
    settextstyle(3,0,8);
    delay(200);
    outtextxy(250,80,")");
    delay(200);
    line(250,95,380,95);
    delay(200);
    outtextxy(360,80,"(");
    setcolor(15);
    delay(200);
    outtextxy(200,80,s1);
    delay(200);
    outtextxy(300,80,s2);
    if(num2<10)
    {
      if(num1<=num2)
      {
	d1=num2/num1;
	s= num2 - (num1*d1);
	if(s==0)
	{
	   r=d1%10 + 48;
	   q1[0]=r;
	   q1[1]=NULL;
	   delay(200);
	   outtextxy(385,80,q1);
	   delay(200);
	   outtextxy(300,150,s2);
	   setcolor(4);
	   delay(200);
	   outtextxy(230,150,"-");
	   line(260,245,360,245);
	   setcolor(14);
	   delay(200);
	   outtextxy(300,230,"0");
	}
	else
	{
	   r=d1%10 + 48;
	   q1[0]=r;
	   q1[1]=NULL;
	   delay(200);
	   outtextxy(385,80,q1);
	   r=num1 * (q1[0]-48) +48;
	   x1[0]=r;
	   x1[1]=NULL;
	   delay(200);
	   outtextxy(300,150,x1);
	   setcolor(4);
	   delay(200);
	   outtextxy(230,150,"-");
	   line(260,245,360,245);
	   r=num2-(x1[0]-48) + 48;
	   r1[0]=r;
	   r1[1]=NULL;
	   setcolor(14);
	   delay(200);
	   outtextxy(300,230,r1);
	}
      }
    }
    else
    {
     settextstyle(1,0,2);
     setcolor(15);
     delay(200);
     outtextxy(120,300,"Divident is not single digit number.");
    }
     settextstyle(1,0,2);
     setcolor(15);
     delay(200);
     outtextxy(50,400,"Press 0 for exit or Press any other key to continue .");
     ch=getche();
     if(ch!='0')
     {
	 closegraph();
     }
     else
     {
	 cleardevice();
     }
  }while(ch!='0');
}
//******** dividetwo FUNCTION TO DIVIDE BY TWO DIGIT NUMBER **********
void dividetwo()
{
  int gd=0,gm,num1,num2,r,d1,d2,d3,s;
  char s1[4],s2[4],s3[4],s4[4],s5[4],q1[4],q2[4],q3[4],r1[4],r2[4],r3[4];
  char x1[4],x2[4],x3[4],ch,c1[4],n1[4];
  do
  {
    initgraph(&gd,&gm," ");
    cout<<"Enter divisor:-";
    cin>>num1;
    cout<<"\nEnter dividend:-";
    cin>>num2;
    r=num1%10 + 48;
    s1[0]=r;
    s1[1]=NULL;
    r=num2%10 + 48;
    s2[1]=r;
    r=num2/10 + 48;
    s2[0]=r;
    s2[2]=NULL;
    setcolor(10);
    settextstyle(3,0,7);
    outtextxy(250,50,")");
    delay(200);
    line(250,65,425,65);
    delay(200);
    outtextxy(410,50,"(");
    delay(200);
    setcolor(15);
    outtextxy(200,50,s1);
    delay(200);
    outtextxy(300,50,s2);
    d1=num2/num1;
    r=d1/10 + 48;
    q1[0]=r;
    q1[1]=NULL;
    delay(200);
    outtextxy(425,50,q1);
    r=num1*(q1[0]-48) + 48;
    x1[0]=r;
    x1[1]=NULL;
    delay(200);
    outtextxy(300,120,x1);
    setcolor(4);
    delay(200);
    outtextxy(230,120,"-");
    line(260,200,400,200);
    r=((num2/10)-(x1[0]-48)) + 48;
    r1[0]=r;
    r1[1]=NULL;
    delay(200);
    outtextxy(300,190,r1);
    r=num2%10 + 48;
    c1[0]=r;
    c1[1]=NULL;
    delay(200);
    outtextxy(350,190,c1);
    r=d1%10 + 48;
    q2[0]=r;
    q2[1]=NULL;
    setcolor(15);
    delay(200);
    outtextxy(475,50,q2);
    setcolor(4);
    r=((q2[0]-48)*num1) ;
    if(r<10)
    {
       r2[0]=r + 48;
       r2[1]=NULL;
       delay(200);
       outtextxy(350,260,r2);
    }
    else
    {
       r2[0]=r/10 + 48;
       r2[1]=r%10 + 48;
       r2[2]=NULL;
       delay(200);
       outtextxy(300,260,r2);
    }
    delay(200);
    outtextxy(230,260,"-");
    setcolor(14);
    line(260,340,400,340);
    r=num2-(d1*num1);
    if(r<10)
    {
       r3[0]=r%10 + 48;
       r3[1]=NULL;
       delay(200);
       outtextxy(350,330,r3);
    }
    else
    {
       r3[0]=r/10 + 48;
       r3[1]=r%10 + 48;
       r3[2]=NULL;
       delay(200);
       outtextxy(300,330,r3);
    }
     settextstyle(1,0,2);
     setcolor(15);
     delay(200);
     outtextxy(50,400,"Press 0 for exit or Press any other key to continue .");
     ch=getche();
     if(ch!='0')
     {
	 closegraph();
     }
     else
     {
	 cleardevice();
     }
  }while(ch!='0');
}

//******** MAIN METHOD **********
void main()
{
    clrscr();
    char ch,ch1;
    int gd=0,gm;
    initgraph(&gd,&gm," ");
    settextstyle(10,0,4);
    setcolor(4);
    outtextxy(100,50,"* CALCULATOR *");
    settextstyle(6,0,4);
    setcolor(2);
    delay(200);
    outtextxy(50,150,"* A basic project which teach basic maths  ");
    outtextxy(70,200,"to children.");
    setcolor(14);
    delay(200);
    outtextxy(50,250,"* Special thanks to my ideal - ");
    setcolor(4);
    settextstyle(10,0,3);
    delay(200);
    outtextxy(200,300,"MR. ASHOK BHARDWAJ");
    setcolor(15);
    settextstyle(6,0,4);
    delay(200);
    outtextxy(50,360,"* A project by - Vivek(IT)");
    setcolor(3);
    delay(200);
    outtextxy(50,410,"* Press any key to START the Project");
    delay(1500);
   // getch();
    cleardevice();
    settextstyle(10,0,4);
    setcolor(4);
    outtextxy(70,50,"* Basic Controls- *");
    settextstyle(6,0,4);
    setcolor(2);
    delay(200);
    outtextxy(50,150,"* Press 0 to exit from current operation ");
    outtextxy(70,200," either +,-,x,/.");
    setcolor(14);
    delay(200);
    outtextxy(50,250,"* Press any other key to remain in same ");
    outtextxy(70,300," operation.");
    setcolor(4);
    delay(200);
    outtextxy(50,350,"* Don't press 0 until you want to exit ");
    outtextxy(70,400," from that window.");
    delay(1500);
    cleardevice();
    do
    {
	settextstyle(7,0,6);
	setcolor(4);
	outtextxy(0,50,"**CG MINI PROJECT**");
	settextstyle(10,0,3);
	setcolor(7);
	outtextxy(0,150,"1. Addition(+)");
	setcolor(13);
	outtextxy(280,200,"2. Subtraction(-)");
	setcolor(14);
	outtextxy(0,250,"3. Multiplication(x)");
	setcolor(10);
	outtextxy(300,300,"4. Division(/)");
	setcolor(4);
	outtextxy(0,350,"5.Exit");
	setcolor(15);
	outtextxy(100,400,"Enter your choice:-");
	ch=getche();
	cleardevice();
	switch(ch)
	{
	      case '1':
			 do
			 {
			     settextstyle(10,0,4);
			     setcolor(4);
			     outtextxy(80,50,"** 1. ADDITION **");
			     settextstyle(6,0,4);
			     setcolor(2);
			     outtextxy(50,150,"1. Single Digit Number");
			     setcolor(13);
			     outtextxy(330,210,"2. Double Digit Number");
			     setcolor(14);
			     outtextxy(50,280,"3. Three Digit Number");
			     setcolor(15);
			     outtextxy(330,340,"4. Exit");
			     setcolor(10);
			     outtextxy(50,400,"Enter your choice:-");
			     ch1=getche();
			     cleardevice();
			     switch(ch1)
			     {
				 case '1':
					    addonedigit();
					    break;
				 case '2':
					    addtwodigit();
					    break;
				 case '3':
					    addthreedigit();
					    break;
				 case '4':
					    break;
			     }

			 }while(ch1!='4');
			 break;
	      case '2':
			 do
			 {
			     settextstyle(10,0,4);
			     setcolor(4);
			     outtextxy(80,50,"** 2. SUBTRACTION **");
			     settextstyle(3,0,4);
			     setcolor(2);
			     outtextxy(50,150,"1 Single Digit Number");
			     setcolor(13);
			     outtextxy(350,210,"2 Double Digit Number");
			     setcolor(14);
			     outtextxy(50,280,"3 Three Digit Number");
			     setcolor(15);
			     outtextxy(350,340,"4 Exit");
			     setcolor(10);
			     outtextxy(100,400,"Enter your choice:-");
			     ch1=getche();
			     cleardevice();
			     switch(ch1)
			     {
				 case '1':
					    subonedigit();
					    break;
				 case '2':
					    subtwodigit();
					    break;
				 case '3':
					    subthreedigit();
					    break;
				 case '4':
					    break;
			     }

			 }while(ch1!='4');
			 break;
	      case '3':
			 do
			 {
			     settextstyle(10,0,4);
			     setcolor(4);
			     outtextxy(0,50,"* 3. MULTIPLICATION *");
			     settextstyle(5,0,6);
			     setcolor(2);
			     outtextxy(50,150,"1. Single Digit Number");
			     setcolor(14);
			     outtextxy(50,230,"2. Double Digit Number");
			     setcolor(4);
			     outtextxy(50,310,"3. Exit");
			     setcolor(15);
			     outtextxy(50,390,"Enter your choice:-");
			     ch1=getche();
			     cleardevice();
			     switch(ch1)
			     {
				 case '1':
					    multiplyone();
					    break;
				 case '2':
					    multiplytwo();
					    break;
				 case '3':
					    break;
			     }

			 }while(ch1!='3');
			 break;
	      case '4':
			 do
			 {
			     settextstyle(10,0,4);
			     setcolor(4);
			     outtextxy(0,50,"* 4. DIVISION *");
			     settextstyle(8,0,5);
			     setcolor(2);
			     outtextxy(50,150,"1. Single Digit Number");
			     setcolor(14);
			     outtextxy(50,230,"2. Double Digit Number");
			     setcolor(4);
			     outtextxy(50,310,"3. Exit");
			     setcolor(15);
			     outtextxy(50,390,"Enter your choice:-");
			     ch1=getche();
			     cleardevice();
			     switch(ch1)
			     {
				 case '1':
					    divideone();
					    break;
				 case '2':
					    dividetwo();
					    break;
				 case '3':
					    break;
			     }

			 }while(ch1!='3');
			 break;
	      case '5':
			 settextstyle(10,0,4);
			 setcolor(4);
			 outtextxy(100,50,"* CALCULATOR *");
			 settextstyle(6,0,4);
			 setcolor(2);
			 outtextxy(50,150,"* Thanks for using this mini Calculator. ");
			 setcolor(3);
			 outtextxy(50,200,"* I wish it helps you.");
			 setcolor(14);
			 outtextxy(50,250,"* Special thanks to my ideal - ");
			 setcolor(4);
			 settextstyle(10,0,3);
			 outtextxy(200,300,"MR. ASHOK BHARDWAJ");
			 setcolor(15);
			 settextstyle(6,0,4);
			 outtextxy(50,360,"* A project by - Vivek(IT)");
			 delay(1500);
			 break;
	}

    }while(ch!='5');
    closegraph();
}