//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.SmXhdpiPh.fmx", _PLAT_ANDROID)
#pragma resource ("*.NmXhdpiPh.fmx", _PLAT_ANDROID)

TForm1 *Form1;
TLabel *Label[10];
TRectangle *sha[100];
TLine * LIN[100];
int g=0,i=0,a[4],J=0,K=0,b=0,JUM=5,TIIME1=60,TIIME2=60,TIIME3=60,TIIME4=60,TIIME5=60;
String Dap[100];
String Check;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::comehere(String a, int b, int c)
{
	sha[i]=new TRectangle(this);
	sha[i]->Parent=this;
	sha[i]->Position->X=320;
	sha[i]->Position->Y=72+g;
	g=g+60;
	sha[i]->Height=50;
	sha[i]->Width=c;
	sha[i]->Stroke->Color=NULL;
	sha[i]->Fill->Color=b;
	i++;

	Label[i]=new TLabel(this);
	Label[i]->Parent=this;
	Label[i]->Text=a;
	Label[i]->Position->X=320;
	Label[i]->Position->Y=12+g;
	g=g+10;
	Label[i]->Height=50;
	Label[i]->Width=c;
	//Label[i]->Stroke->Color=NULL;
	//Label[i]->Fill->Color=b;
	//Label[i]->Align=L->Align;
	Label[i]->StyledSettings=L->StyledSettings >> TStyledSetting::ssFamily >> TStyledSetting::ssSize >> TStyledSetting::ssFontColor >> TStyledSetting::ssStyle;
	Label[i]->TextSettings->HorzAlign=L->TextSettings->HorzAlign;
	Label[i]->TextSettings->VertAlign=L->TextSettings->VertAlign;
	Label[i]->Font->Size=12;
	Label[i]->FontColor=L->FontColor;
	//Line1->Height+=70;

	//[i]=new TLine(this);
	//LIN[i]->Parent=this;
	//LIN[i]->Position->X=368;
	//LIN[i]->Position->Y=42+g;
	//g=g+10;
	//LIN[i]->Height=41;
	//LIN[i]->Width=96;
	//LIN[i]->Stroke->Color=NULL;
	//LIN[i]->Fill->Color=b;
	//i++;
	if (i==2) {
		Line1->Visible=true;
	}
	if (i==3) {
		Line2->Visible=true;
	}
	 if (i==4) {
		Line3->Visible=true;
		Line4->Visible=true;
		RoundRect3->Visible=true;
	}

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Rectangle1Click(TObject *Sender)
{
	comehere(Label1->Text, Rectangle1->Fill->Color,Rectangle1->Width);
	Dap[1]+="1";
	Rectangle1->Visible=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Rectangle2Click(TObject *Sender)
{
	comehere(Label2->Text, Rectangle2->Fill->Color,Rectangle2->Width);
	Dap[1]+="2";
	Rectangle2->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle3Click(TObject *Sender)
{
	comehere(Label3->Text, Rectangle3->Fill->Color,Rectangle3->Width);
	Dap[1]+="3";
	Rectangle3->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle4Click(TObject *Sender)
{
	comehere(Label4->Text, Rectangle4->Fill->Color,Rectangle4->Width);
	Dap[1]+="4";
	Rectangle4->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RoundRect1Click(TObject *Sender)
{
	if (Dap[1]=="1234") {
	ShowMessage("Succed!!!!!!!!");
	RoundRect4->Visible=true;
	RoundRect2->Visible=false;
	Rectangle1->Visible=false;
	Rectangle2->Visible=false;
	Rectangle3->Visible=false;
	Rectangle4->Visible=false;
	RoundRect1->Visible=false;
	}
	else
	{
	ShowMessage("failed......");
	RoundRect4->Visible=true;
	RoundRect2->Visible=false;
	JUM--;
	Rectangle1->Visible=false;
	Rectangle2->Visible=false;
	Rectangle3->Visible=false;
	Rectangle4->Visible=false;
	RoundRect1->Visible=false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RoundRect4Click(TObject *Sender)
{
	Panel1->Visible=true;
	Panel1->BringToFront();
	g=0;
	RoundRect4->Visible=false;
	Label19->BringToFront();
	Label19->Visible=true;
	RoundRect8->Visible=false;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle5Click(TObject *Sender)
{
	comehere(Label9->Text, Rectangle5->Fill->Color,Rectangle5->Width);
	Check+="1";
	Rectangle5->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle7Click(TObject *Sender)
{
	comehere(Label11->Text, Rectangle7->Fill->Color,Rectangle7->Width);
	Check+="2";
	Rectangle7->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle6Click(TObject *Sender)
{
	comehere(Label10->Text, Rectangle6->Fill->Color,Rectangle6->Width);
	Check+="3";
	Rectangle6->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle9Click(TObject *Sender)
{
	comehere(Label13->Text, Rectangle9->Fill->Color,Rectangle9->Width);
	Check+="4";
	Rectangle9->Visible=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Rectangle8Click(TObject *Sender)
{
	comehere(Label12->Text, Rectangle8->Fill->Color,Rectangle8->Width);
	Check+="5";
	Rectangle8->Visible=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::RoundRect5Click(TObject *Sender)
{
	if (Check=="2354"||Check=="3254") {
	ShowMessage("Succed!!!!!!!!");
	RoundRect8->Visible=true;
	RoundRect13->Visible=false;
	Rectangle6->Visible=false;
	Rectangle7->Visible=false;
	Rectangle8->Visible=false;
	Rectangle9->Visible=false;
	Rectangle5->Visible=false;
    RoundRect5->Visible=false;
	}
	else
	{
	ShowMessage("failed......");
	RoundRect8->Visible=true;
	RoundRect13->Visible=false;
	JUM--;
	Rectangle6->Visible=false;
	Rectangle7->Visible=false;
	Rectangle8->Visible=false;
	Rectangle9->Visible=false;
	Rectangle5->Visible=false;

	}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::RoundRect8Click(TObject *Sender)
{
	Panel3->Visible=true;
	Panel3->BringToFront();
	g=0;
	Label28->Visible=true;
	Label28->BringToFront();
	RoundRect8->Visible=false;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Rectangle11Click(TObject *Sender)
{
	comehere(Label21->Text, Rectangle11->Fill->Color,Rectangle11->Width);
	Dap[2]+="4";
	Rectangle11->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle10Click(TObject *Sender)
{
	comehere(Label20->Text, Rectangle10->Fill->Color,Rectangle10->Width);
	Dap[2]+="1";
	Rectangle10->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle13Click(TObject *Sender)
{
	comehere(Label23->Text, Rectangle13->Fill->Color,Rectangle13->Width);
	Dap[2]+="2";
	Rectangle13->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle12Click(TObject *Sender)
{
	comehere(Label22->Text, Rectangle12->Fill->Color,Rectangle12->Width);
	Dap[2]+="3";
	Rectangle12->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RoundRect9Click(TObject *Sender)
{
	if (Dap[2]=="1234") {
	ShowMessage("Succed!!!!!!!!");
	RoundRect10->Visible=false;
	RoundRect12->Visible=true;
	Rectangle10->Visible=false;
	Rectangle11->Visible=false;
	Rectangle12->Visible=false;
	Rectangle13->Visible=false;
	RoundRect9->Visible=false;
	}
	else
	{
	ShowMessage("failed......");
	RoundRect10->Visible=false;
	RoundRect12->Visible=true;
	JUM--;
	Rectangle10->Visible=false;
	Rectangle11->Visible=false;
	Rectangle12->Visible=false;
	Rectangle13->Visible=false;
	RoundRect9->Visible=false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RoundRect2Click(TObject *Sender)
{

	for(int a=0;a<i;a++)
	{
	delete Label[a];
	delete sha[a];
	Dap[1]="";
	g=0;
	Rectangle1->Visible=true;
	Rectangle2->Visible=true;
	Rectangle3->Visible=true;
	Rectangle4->Visible=true;
	Line1->Visible=false;
	Line2->Visible=false;
	Line3->Visible=false;
	Line4->Visible=false;
	RoundRect3->Visible=false;
	}


}
//---------------------------------------------------------------------------

void __fastcall TForm1::RoundRect13Click(TObject *Sender)
{
	int b[10]={4, 1};
	for (i=0; i<b[0];i++) {
	delete Label[i];
	delete sha[i];
	//Line1->Visible=false;
	//Line2->Visible=false;
	//Line3->Visible=false;
	//Line4->Visible=false;
	Rectangle6->Visible=true;
	Rectangle7->Visible=true;
	Rectangle8->Visible=true;
	Rectangle9->Visible=true;
	//RoundRect->Visible=false;
	Check="";
	g=0;
	}
	b[1]++;
	b[2]=b[0]*b[1];}
//---------------------------------------------------------------------------

void __fastcall TForm1::RoundRect10Click(TObject *Sender)
{
	int b[10]={4, 1};
	for (i=0; i<b[0];i++) {
	delete Label[i];
	delete sha[i];
	//Line1->Visible=false;
	//Line2->Visible=false;
	//Line3->Visible=false;
	//Line4->Visible=false;
	Rectangle10->Visible=true;
	Rectangle11->Visible=true;
	Rectangle12->Visible=true;
	Rectangle13->Visible=true;
	//RoundRect->Visible=false;
	Dap[2]="";
	g=0;
	}
	b[1]++;
	b[2]=b[0]*b[1];
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Rectangle14Click(TObject *Sender)
{
	comehere(Label30->Text, Rectangle14->Fill->Color,Rectangle14->Width);
	Dap[3]+="1";
	Rectangle14->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle15Click(TObject *Sender)
{
	comehere(Label31->Text, Rectangle15->Fill->Color,Rectangle15->Width);
	Dap[3]+="2";
	Rectangle15->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle16Click(TObject *Sender)
{
	comehere(Label32->Text, Rectangle16->Fill->Color,Rectangle16->Width);
	Dap[3]+="3";
	Rectangle16->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle17Click(TObject *Sender)
{
	comehere(Label33->Text, Rectangle17->Fill->Color,Rectangle17->Width);
	Dap[3]+="4";
	Rectangle17->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RoundRect14Click(TObject *Sender)
{
	if (Dap[3]=="3124"||Dap[3]=="1324") {
	ShowMessage("Succed!!!!!!!!");
	OSK->Visible=true;
	RoundRect14->Visible=false;
	RoundRect18->Visible=false;
	Rectangle14->Visible=false;
	Rectangle15->Visible=false;
	Rectangle16->Visible=false;
	Rectangle17->Visible=false;
	RoundRect14->Visible=false;
	}
	else
	{
	ShowMessage("failed......");
	OSK->Visible=true;
	RoundRect14->Visible=false;
	RoundRect18->Visible=false;
	JUM--;
	Rectangle14->Visible=false;
	Rectangle15->Visible=false;
	Rectangle16->Visible=false;
	Rectangle17->Visible=false;
	RoundRect14->Visible=false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RoundRect18Click(TObject *Sender)
{
	int b[10]={4, 1};
	for (i=0; i<b[0];i++) {
	delete Label[i];
	delete sha[i];
	//Line1->Visible=false;
	//Line2->Visible=false;
	//Line3->Visible=false;
	//Line4->Visible=false;
	Rectangle18->Visible=true;
	Rectangle19->Visible=true;
	Rectangle20->Visible=true;
	Rectangle21->Visible=true;
	//RoundRect->Visible=false;
	Dap[4]="";
	g=0;
	}
	b[1]++;
	b[2]=b[0]*b[1];
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Rectangle18Clik(TObject *Sender)
{  	comehere(Label37->Text, Rectangle18->Fill->Color,Rectangle18->Width);
	Dap[4]+="1";
	Rectangle18->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle19Click(TObject *Sender)
{
	comehere(Label39->Text, Rectangle19->Fill->Color,Rectangle19->Width);
	Dap[4]+="2";
	Rectangle19->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle20Click(TObject *Sender)
{
	comehere(Label40->Text, Rectangle20->Fill->Color,Rectangle20->Width);
	Dap[4]+="3";
	Rectangle20->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle21Click(TObject *Sender)
{
	comehere(Label41->Text, Rectangle21->Fill->Color,Rectangle21->Width);
	Dap[4]+="4";
	Rectangle21->Visible=false;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::RoundRect22Click(TObject *Sender)
{
	int b=4,c=1;
	for (i=0; i<b;i++) {
	delete Label[i];
	delete sha[i];
	//Line1->Visible=false;
	//Line2->Visible=false;
	//Line3->Visible=false;
	//Line4->Visible=false;
	Rectangle18->Visible=true;
	Rectangle19->Visible=true;
	Rectangle20->Visible=true;
	Rectangle21->Visible=true;
	//RoundRect->Visible=false;
	Dap[4]="";
	g=0;
	}
	c++;
	b=b*c;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::RoundRect23Click(TObject *Sender)
{
	if (Dap[4]=="1243"||Dap[4]=="1423") {
	ShowMessage("Succed!!!!!!!!");
	RoundRect20->Visible=true;
	RoundRect22->Visible=false;
	Rectangle18->Visible=false;
	Rectangle19->Visible=false;
	Rectangle20->Visible=false;
	Rectangle21->Visible=false;
	RoundRect23->Visible=false;
	}
	else
	{
	ShowMessage("failed......");
	RoundRect20->Visible=true;
	RoundRect22->Visible=false;
	JUM--;
	Rectangle18->Visible=false;
	Rectangle19->Visible=false;
	Rectangle20->Visible=false;
	Rectangle21->Visible=false;
	RoundRect23->Visible=false;
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::OSKClick(TObject *Sender)
{
	Level4->Visible=true;
	Level4->BringToFront();
	Panel3->Visible=false;
	Panel2->Visible=false;
	Panel1->Visible=false;
	Label18->Visible=false;
	Label28->Visible=false;
	g=0;

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Rectangle22Click(TObject *Sender)
{

	comehere(Label48->Text, Rectangle22->Fill->Color,Rectangle22->Width);
	Dap[5]+="1";
	Rectangle22->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle23Click(TObject *Sender)
{

	comehere(Label49->Text, Rectangle23->Fill->Color,Rectangle23->Width);
	Dap[4]+="2";
	Rectangle23->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle24Click(TObject *Sender)
{
	comehere(Label50->Text, Rectangle24->Fill->Color,Rectangle24->Width);
	Dap[5]+="4";
	Rectangle24->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle25Click(TObject *Sender)
{
	comehere(Label51->Text, Rectangle25->Fill->Color,Rectangle25->Width);
	Dap[5]+="3";
	Rectangle25->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle26Click(TObject *Sender)
{
	comehere(Label57->Text, Rectangle26->Fill->Color,Rectangle26->Width);
	Dap[5]+="5";
	Rectangle26->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RoundRect26Click(TObject *Sender)
{
	  if (Dap[5]=="12435"||Dap[5]=="21345") {
	ShowMessage("Succed!!!!!!!!");
	RoundRect17->Visible=true;
	RoundRect25->Visible=false;
	Rectangle22->Visible=false;
	Rectangle23->Visible=false;
	Rectangle24->Visible=false;
	Rectangle25->Visible=false;
	Rectangle26->Visible=false;
	RoundRect26->Visible=false;
	}
	else
	{
	ShowMessage("failed......");
	RoundRect17->Visible=true;
	RoundRect25->Visible=false;
	JUM--;
	Rectangle22->Visible=false;
	Rectangle23->Visible=false;
	Rectangle24->Visible=false;
	Rectangle25->Visible=false;
	Rectangle26->Visible=false;
	RoundRect26->Visible=false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RoundRect17Click(TObject *Sender)
{
	Panel5->Visible=true;
	Panel5->BringToFront();
	Label59->Text=JUM;
	if (JUM==5) {
		Label61->Text="A+";
		Label69->Text="		오오오 전부 다 맞추셨군요!!\n   참 잘했어요 우리친구는  우리나라의 자라나는 꿈나무에요~ ";
		Button1->Text="네~감사합니다";
	}
	if (JUM==4) {
		Label64->Text="A";
		Label69->Text="오오오 여유롭게 합격하셨군욧?!?! 멘사에 들어가보시는게어떨까요?!";
		Button1->Text="멘사ㄱㄱㄱ";
	}
	if (JUM==3) {
		Label65->Text="B";
		Label69->Text="합격이십니다!! 이대로 열심히 하셔서 인서울 하세여~!!";
		Button1->Text="한양대? 성균관대? 말만혀~";
	}
	if (JUM==2) {
		Label66->Text="C";
		Label69->Text="아쉽게도...불합격입니다... 조금더 공부하셔서 다시오세요";
		Button1->Text="아자아잣!!";
	}
	if (JUM==1) {
		Label67->Text="D";
		Label69->Text="불합격!! 혹시.. 주위에서... 바보라는소리들으신적 없으신가요??";
		Button1->Text="엫ㅎ헿ㅎ헹헤헤~";
	}
	if (JUM==0) {
		Label68->Text="F";
		Label69->Text="낙제점입니다^^ 나가죽으세요^^ 죽어서 인생 리셋하는게 답입니다^^";
		Button1->Text="자살ㄱㄱ";
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RoundRect20Click(TObject *Sender)
{
	Panel4->Visible=true;
	Panel4->BringToFront();
	g=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Circle1Click(TObject *Sender)
{
		 Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Rectangle27->Visible=false;
	Label69->Visible=false;
	Button1->Visible=false;
	Circle1->Visible=true;
	Label63->Visible=true;
    Label58->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Panel6->Visible=false;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	TIIME1--;
	Label74->Text=TIIME1;
	if (TIIME1==0) {
	OutPanel1->Visible=true;

	}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Out1Click(TObject *Sender)
{
		OutPanel1->Visible=false;
		JUM--;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
	TIIME2--;
	Label74->Text=TIIME2;
	if (TIIME2==0) {
	OutPanel1->Visible=true;

	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer3Timer(TObject *Sender)
{
	TIIME3--;
	Label74->Text=TIIME3;
	if (TIIME3==0) {
	OutPanel1->Visible=true;

	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer4Timer(TObject *Sender)
{
	TIIME4--;
	Label74->Text=TIIME4;
	if (TIIME4==0) {
	OutPanel1->Visible=true;

	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer5Timer(TObject *Sender)
{
	TIIME5--;
	Label74->Text=TIIME5;
	if (TIIME5==0) {
	OutPanel1->Visible=true;

	}
}
//---------------------------------------------------------------------------







void __fastcall TForm1::Button3Click(TObject *Sender)
{
	JUM+=5;
}
//---------------------------------------------------------------------------

