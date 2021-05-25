
#include"A.CPP"

void front(int t,int ch)
{
	int x=100,y=180;
	setcolor(4);
	settextstyle(10,0,1);
	outtextxy(x,y,"WELCOME TO C++ COMPOSER");
	delay(t+1000);
	setcolor(0);
	outtextxy(x,y,"WELCOME TO C++ COMPOSER");

	setcolor(2);
	settextstyle(1,0,1);
	outtextxy(x,y,"MENU BAR");
	outtextxy(x,y+40,"NEW COMPOSE");
	outtextxy(x,y+60,"OPTIONS");
	outtextxy(x-40,y+40,">>");
	while(ch!=27)
	{
		ch=getch();

		if(ch==80)
		{       setcolor(0);
			outtextxy(x-40,y+40,">>");
			y+=20;
			if(y>200)
			y-=20;
			setcolor(2);
			outtextxy(x-40,y+40,">>");
		      //	ch=getch();

		  }

		if(ch==72)
		{       setcolor(0);
			outtextxy(x-40,y+40,">>");
			y-=20;
			if(y<180)
			y+=20;
			setcolor(2);
			outtextxy(x-40,y+40,">>");
		     //	ch=getch();
		  /*	if(ch==13)
		       {
			setcolor(0);
			outtextxy(x,y,"MENU BAR");
			outtextxy(x,y+40,"NEW COMPOSE");
			outtextxy(x,y+60,"OPTIONS");
			outtextxy(x,y+40,">>");
				break;
		       }                   */
		  }
		  if(ch==27)
		  exit(0);
			if(ch==13)
		       {
			y-=20;
			setcolor(0);
			outtextxy(x,180,"MENU BAR");
			outtextxy(x,y+40,"NEW COMPOSE");
			outtextxy(x,y+60,"OPTIONS");
			outtextxy(x,y+40,">>");

				break;
		       }

	}
}

void draw(int x1,int y1,int x2,int y2,int l,int j)
{
	setcolor(4);
	rectangle(x1,y1,x2,y2);
	setfillstyle(1,15);
	floodfill(x1+20,l,4);

	setcolor(0);
	for(int i=0;i<600;i+=30)
       {
		line(x1+i,y1,x1+i,y2);
	}

	rectangle(x1+20,y1,x1+40,l);
	setfillstyle(1,0);
	floodfill(x1+25,y1+30,0);
	floodfill(x1+35,y1+30,0);

	for( i=80;i<140;i+=30)
      {
		rectangle(x1+i,y1,x1+i+20,l);
	       //	floodfill(x1+i+25,y1+30,l);
       }
	for(i=i+30;i<260;i+=30)
	{
		rectangle(x1+i,y1,x1+i+20,l);
	}
	for(i=i+30;i<350;i+=30)
	{
		rectangle(x1+i,y1,x1+i+20,l);
	}
	for(i=i+30;i<450;i+=30)
	{
		rectangle(x1+i,y1,x1+i+20,l);
	}
	for(i=i+30;i<550;i+=30)
	{
		rectangle(x1+i,y1,x1+i+20,l);
	}
	for(i=0,j=0;i<2;++i,j+=30)
	{
		floodfill(x1+60+25+j,y1+30,0);
	}

	for(i=0,j=j+30;i<3;++i,j+=30)
	{
		floodfill(x1+60+25+j,y1+30,0);
	}
	for(i=0,j=j+30;i<2;++i,j+=30)
	{
		floodfill(x1+60+25+j,y1+30,0);
	}

	for(i=0,j=j+30;i<3;++i,j+=30)
	{
		floodfill(x1+60+25+j,y1+30,0);
	}

	for(i=0,j=j+30;i<2;++i,j+=30)
	{
		floodfill(x1+60+25+j,y1+30,0);
	}
	for(i=0,j=0;i<2;++i,j+=30)
	{
		floodfill(x1+60+35+j,y1+30,0);
	}
	for(i=0,j=j+30;i<3;++i,j+=30)
	{
		floodfill(x1+60+35+j,y1+30,0);
	}
	for(i=0,j=j+30;i<2;++i,j+=30)
	{
		floodfill(x1+60+35+j,y1+30,0);
	}
	for(i=0,j=j+30;i<3;++i,j+=30)
	{
		floodfill(x1+60+35+j,y1+30,0);
	}
	for(i=0,j=j+30;i<2;++i,j+=30)
	{
		floodfill(x1+60+35+j,y1+30,0);
	}
	setcolor(1);
	settextstyle(0,0,0);
	outtextxy(500,20,"PRESS ESC TO EXIT");
}
void sound(int x1,int y1,int& ch,int t)
{
	while(ch!=27)
	{

		ch=getch();
		if(ch==97)                      //a
		{
			setcolor(2);
			outtextxy(x1+5,y1+70,"*");
			delay(t);
			sound(110);
			delay(t);
			nosound();
			setcolor(15);
			outtextxy(x1+5,y1+70,"*");

		 }
		 if(ch==119)                 //w
		{
			setcolor(2);
			outtextxy(x1+25,y1+70,"*");
			delay(t);
			sound(116.54);
			delay(t);
			nosound();
			setcolor(0);
			outtextxy(x1+25,y1+70,"*");

		 }
		if(ch==122)               //z
		{
			setcolor(2);
			outtextxy(x1+45,y1+70,"*");
			delay(t);
			sound(123.47);
			delay(t);
			nosound();
			setcolor(15);
			outtextxy(x1+45,y1+70,"*");

		 }
		if(ch==120)            //x
		{
			setcolor(2);
			outtextxy(x1+65,y1+70,"*");
			delay(t);
			sound(130.81);
			delay(t);
			nosound();
			setcolor(15);
			outtextxy(x1+65,y1+70,"*");

		 }
		if(ch==101)         //e
		{
			setcolor(2);
			outtextxy(x1+85,y1+70,"*");
			delay(t);
			sound(138.59);
			delay(t);
			nosound();
			setcolor(0);
			outtextxy(x1+85,y1+70,"*");

		 }
		if(ch==99)                     //c
		{
			setcolor(2);
			outtextxy(x1+105,y1+150,"*");
			delay(t);
			sound(146.83);
			delay(t);
			nosound();
			setcolor(15);
			outtextxy(x1+105,y1+150,"*");

		 }
		if(ch==114)            //r
		{
			setcolor(2);
			outtextxy(x1+120,y1+70,"*");
			delay(t);
			sound(155.56);
			delay(t);
			nosound();
			setcolor(0);
			outtextxy(x1+120,y1+70,"*");

		 }
		 if(ch==118)		//v
		{
			setcolor(2);
			outtextxy(x1+140,y1+70,"*");
			delay(t);
			sound(164.81);
			delay(t);
			nosound();
			setcolor(15);
			outtextxy(x1+140,y1+70,"*");
		 }
		if(ch==103) 		//g
		{
			setcolor(2);
			outtextxy(x1+155,y1+70,"*");
			delay(t);
			sound(174.61);
			delay(t);
			nosound();
			setcolor(15);
			outtextxy(x1+155,y1+70,"*");

		 }
		if(ch==116)                 //t
		{
			setcolor(2);
			outtextxy(x1+175,y1+70,"*");
			delay(t);
			sound(185);
			delay(t);
			nosound();
			setcolor(0);
			outtextxy(x1+175,y1+70,"*");

		 }
		if(ch==104)                    //h
		{
			setcolor(2);
			outtextxy(x1+190,y1+150,"*");
			delay(t);
			sound(196);
			delay(t);
			nosound();
			setcolor(15);
			outtextxy(x1+190,y1+150,"*");

		 }
		if(ch==121)             //y
		{
			setcolor(2);
			outtextxy(x1+210,y1+70,"*");
			delay(t);
			sound(207.65);
			delay(t);
			nosound();
			setcolor(0);
			outtextxy(x1+210,y1+70,"*");

		 }
		if(ch==98)               //b
		{
			setcolor(2);
			outtextxy(x1+225,y1+150,"*");
			delay(t);
			sound(220);
			delay(t);
			nosound();
			setcolor(15);
			outtextxy(x1+225,y1+150,"*");

		 }
		if(ch==117)                  //u
		{
			setcolor(2);
			outtextxy(x1+240,y1+70,"*");
			delay(t);
			sound(233.08);
			delay(t);
			nosound();
			setcolor(0);
			outtextxy(x1+240,y1+70,"*");

		 }
		if(ch==110)                       //n
		{
			setcolor(2);
			outtextxy(x1+260,y1+70,"*");
			delay(t);
			sound(246.94);
			delay(t);
			nosound();
			setcolor(15);
			outtextxy(x1+260,y1+70,"*");

		 }
		if(ch==106)                       //j
		{
			setcolor(2);
			outtextxy(x1+275,y1+70,"*");
			delay(t);
			sound(261.63);
			delay(t);
			nosound();
			setcolor(15);
			outtextxy(x1+275,y1+70,"*");

		 }
		if(ch==105)                        //i
		{
			setcolor(2);
			outtextxy(x1+295,y1+70,"*");
			delay(t);
			sound(277.18);
			delay(t);
			nosound();
			setcolor(0);
			outtextxy(x1+295,y1+70,"*");

		 }

		if(ch==107)                    //k
		{
			setcolor(2);
			outtextxy(x1+315,y1+150,"*");
			delay(t);
			sound(293.66);
			delay(t);
			nosound();
			setcolor(15);
			outtextxy(x1+315,y1+150,"*");

		 }
		if(ch==111)                    //o
		{
			setcolor(2);
			outtextxy(x1+330,y1+70,"*");
			delay(t);
			sound(311.13);
			delay(t);
			nosound();
			setcolor(0);
			outtextxy(x1+330,y1+70,"*");

		 }
		if(ch==109)                      //m
		{
			setcolor(2);
			outtextxy(x1+345,y1+70,"*");
			delay(t);
			sound(329.63);
			delay(t);
			nosound();
			setcolor(15);
			outtextxy(x1+345,y1+70,"*");

		 }
		if(ch==108)                     //l
		{
			setcolor(2);
			outtextxy(x1+365,y1+70,"*");
			delay(t);
			sound(349.23);
			delay(t);
			nosound();
			setcolor(15);
			outtextxy(x1+365,y1+70,"*");

		 }
		if(ch==112)                     //p
		{
			setcolor(2);
			outtextxy(x1+385,y1+70,"*");
			delay(t);
			sound(369.99);
			delay(t);
			nosound();
			setcolor(0);
			outtextxy(x1+385,y1+70,"*");

		 }
		if(ch==44)                  //,
		{
			setcolor(2);
			outtextxy(x1+400,y1+150,"*");
			delay(t);
			sound(392);
			delay(t);
			nosound();
			setcolor(15);
			outtextxy(x1+400,y1+150,"*");

		 }
		if(ch==91)                    //[
		{
			setcolor(2);
			outtextxy(x1+420,y1+70,"*");
			delay(t);
			sound(415.3);
			delay(t);
			nosound();
			setcolor(0);
			outtextxy(x1+420,y1+70,"*");

		 }
		if(ch==46)                     //.
		{
			setcolor(2);
			outtextxy(x1+435,y1+150,"*");
			delay(t);
			sound(440);
			delay(t);
			nosound();
			setcolor(15);
			outtextxy(x1+435,y1+150,"*");

		 }
		if(ch==61)                   //=
		{
			setcolor(2);
			outtextxy(x1+450,y1+70,"*");
			delay(t);
			sound(466.16);
			delay(t);
			nosound();
			setcolor(0);
			outtextxy(x1+450,y1+70,"*");

		 }
		if(ch==59)                    //;
		{
			setcolor(2);
			outtextxy(x1+470,y1+70,"*");
			delay(t);
			sound(493.88);
			delay(t);
			nosound();
			setcolor(15);
			outtextxy(x1+470,y1+70,"*");

		 }
		if(ch==47)                      ///
		{
			setcolor(2);
			outtextxy(x1+485,y1+70,"*");
			delay(t);
			sound(523.25);
			delay(t);
			nosound();
			setcolor(15);
			outtextxy(x1+485,y1+70,"*");

		 }
		if(ch==93)                           //]
		{
			setcolor(2);
			outtextxy(x1+505,y1+70,"*");
			delay(t);
			sound(554.37);
			delay(t);
			nosound();
			setcolor(0);
			outtextxy(x1+505,y1+70,"*");

		 }
		if(ch==39)                       //'
		{
			setcolor(2);
			outtextxy(x1+520,y1+150,"*");
			delay(t);
			sound(587.33);
			delay(t);
			nosound();
			setcolor(15);
			outtextxy(x1+520,y1+150,"*");

		 }
		if(ch==92)
		{
			setcolor(2);
			outtextxy(x1+540,y1+70,"*");
			delay(t);
			sound(622.25);
			delay(t);
			nosound();
			setcolor(0);
			outtextxy(x1+540,y1+70,"*");

		 }
		if(ch==32)                     //space
		{
			setcolor(2);
			outtextxy(x1+555,y1+70,"*");
			delay(t);
			sound(659.26);
			delay(t);
			nosound();
			setcolor(15);
			outtextxy(x1+555,y1+70,"*");

		 }
		  if(ch==8)
		       {/*  setcolor(0);
			  for(int i=0;i<600;++i)
			  line(0+i,100,10+i,400);
			  front(t,ch);      */
			  break;
		       }

	}
}
void main()
{
	clrscr();
	int a=DETECT,b;
	int x1=10,y1=200,x2=580,y2=400;
	int l=y2-70;
	int j;
	int ch;
	int t=300;
	initgraph(&a,&b,"C:\\TC\\BGI");

	call:
	front(t,ch);
	draw(x1,y1,x2,y2,l,j);
	sound(x1,y1,ch,t);
		  if(ch==8)
		       {  setcolor(0);
			  for(int i=0;i<600;++i)
			  line(0+i,100,10+i,400);
			  goto call;
		       }

      //	getch();
}