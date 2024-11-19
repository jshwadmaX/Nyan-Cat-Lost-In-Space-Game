#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<dos.h>
void main(){
int a=120,b=130,p,x=0,y=-1,ff=0,fb=0,dm=0,ii,xx,yy,xmtr=0,ymtr,amtr=-300,bmtr,rishi,anjali;
long int col1,col2;
char buffer[20],duffer[20];
 int gd =DETECT,gm;
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
 rectangle(0,10,639,479);
outtextxy(100,100,"               NYAN CAT: LOST IN SPACE");
delay(2000);
outtextxy(100,150,"        Press 'A' 'S' 'W' 'D' to move the nyan cat");
delay(2000);
outtextxy(100,200,"Avoid the asteroids and embark on a Meow-Filled Journey");
delay(2000);
outtextxy(100,250,"         Press 'ENTER' to strat the game");
delay(2000);
getch();
srand(time(NULL));
ymtr=rand()%420+30;


while(1)
    {


srand(12345);
for(ii=0;ii<=500;ii++)
{
xx=rand()%getmaxx();
yy=rand()%getmaxy();
putpixel(xx,yy,15);
}



 setcolor(7);
rectangle(a,b,a+110,b+70);
line(a+94,b+30,a+126,b+30);
line(a+74,b+10,a+94,b+30);
line(a+126,b+30,a+146,b+10);
line(a+74,b+10,a+65,b+60);
line(a+146,b+10,a+155,b+60);
line(a+65,b+60,a+90,b+70);
line(a+155,b+60,a+130,b+70);
line(a+110,b+70,a+130,b+70);
line(a+95,b+60,a+125,b+60);
line(a+95,b+60,a+90,b+55);
line(a+125,b+60,a+130,b+55);
setfillstyle(9,3);
floodfill(a+2,b+2,7);//colour for body
setfillstyle(1,8);
rectangle(a+5+fb,b+70,a+15+fb,b+80);
floodfill(a+6+fb,b+71,7);
rectangle(a+25+ff,b+70,a+35+ff,b+80);
floodfill(a+26+ff,b+71,7);
rectangle(a+100+fb,b+70,a+110+fb,b+80);
floodfill(a+101+fb,b+71,7);
rectangle(a+120+ff,b+70,a+130+ff,b+80);
floodfill(a+121+ff,b+71,7);
rectangle(a-20,b+50,a,b+40);
floodfill(a-19,b+41,7);
circle(a+95,b+45,4);
circle(a+125,b+45,4);
floodfill(a+109,b+69,7);
floodfill(a+111,b+69,7);
setcolor(13);
ellipse(a+148,b+57,0,360,6,3);
ellipse(a+72,b+57,0,360,6,3);
setfillstyle(1,13);
floodfill(a+148,b+57,13);
floodfill(a+72,b+57,13);

 if(kbhit())
	{
	    p=getch();
	    if(p=='w')
	    {
		x=0;
		y=-5;
	    }
	     if(p=='a')
	    {
		x=-5;
		y=0;
	    }
	     if(p=='d')
	    {
		x=5;
		y=0;

	    }
	     if(p=='s')
	    {
		x=0;
		y=5;
	    }
	     if(p==' ')
	    {
	       break;
	    }
	}
	if(p=='d'){
	dm++;
	if(dm%2==0){
	ff=5;
	fb=0;
	delay(20);
	}else{
	ff=0;
	fb=5;
	delay(20);
	}
	}

if(p=='a'){
	dm++;
	if(dm%2==0){
	ff=0;
	fb=-5;
	delay(20);
	}else{
	ff=-5;
	fb=0;
	delay(20);
	}
	}

setcolor(15);
	if(xmtr>-670){
circle(640+xmtr,ymtr,30);//outer circle
setfillstyle(SOLID_FILL,RED);
floodfill(638+xmtr,ymtr-10,WHITE);
circle(640+xmtr,ymtr-1,20);//inner circle
setfillstyle(HATCH_FILL,YELLOW);
floodfill(642+xmtr,ymtr-2,WHITE);
setlinestyle(4,15,1);
line(690+xmtr,ymtr,785+xmtr,ymtr+5);//centre line
line(690+xmtr,ymtr-5,785+xmtr,ymtr-20);//upper line
line(690+xmtr,ymtr+15,785+xmtr,ymtr+40);//lower line
xmtr=xmtr-5;
    if(xmtr==-340){
     amtr=0;
     srand(time(NULL));
     bmtr=rand()%420+30;
    }
}


if(amtr>-670){
circle(640+amtr,bmtr,30);//outer circle
setfillstyle(SOLID_FILL,RED);
floodfill(638+amtr,bmtr-10,WHITE);
circle(640+amtr,bmtr-1,20);//inner circle
setfillstyle(HATCH_FILL,YELLOW);
floodfill(642+amtr,bmtr-2,WHITE);
setlinestyle(4,15,1);
line(690+amtr,bmtr,785+amtr,bmtr+5);//centre line
line(690+amtr,bmtr-5,785+amtr,bmtr-20);//upper line
line(690+amtr,bmtr+15,785+amtr,bmtr+40);//lower line
amtr=amtr-5;
    if(amtr==-340){
     xmtr=0;
     srand(time(NULL));
     ymtr=rand()%420+30;
    }
}
rishi=640+xmtr-a-55;
anjali=640+ymtr-b-35;
col1=rishi*rishi+anjali*anjali;
rishi=amtr-a-55;
anjali=bmtr-b-35;
col2=rishi*rishi+anjali*anjali;

 // if(col1==1 || col2==1){
	 sprintf(buffer,"%ld",col1);
	 outtextxy(100,10,buffer);
	 sprintf(duffer,"%ld",col2);
	 outtextxy(100,30,duffer);




	a=a+x;
	b=b+y;
	setlinestyle(0,1,0);
	delay(50);
	cleardevice();
    }
closegraph();

}