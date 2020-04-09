//---------------------------------------------------------------------------

#ifndef MainOCRH
#define MainOCRH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <Xml.Win.msxmldom.hpp>
#include <Xml.XMLDoc.hpp>
#include <Xml.xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <System.Net.HttpClient.hpp>
#include <System.Net.HttpClientComponent.hpp>
#include <System.Net.URLClient.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TButton *ClearButton;
	TButton *TransformButton;
	TStringGrid *StringGrid1;
	TImage *Image2;
	TXMLDocument *XMLDocument1;
	TButton *SaveXMLButton;
	TEdit *Edit1;
	TButton *CheckButton;
	TLabel *Label1;
	TLabel *Label2;
	void __fastcall Image1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall ClearButtonClick(TObject *Sender);
	void __fastcall TransformButtonClick(TObject *Sender);
	void __fastcall SaveXMLButtonClick(TObject *Sender);
	void __fastcall CheckButtonClick(TObject *Sender);
	void __fastcall Edit1Change(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
