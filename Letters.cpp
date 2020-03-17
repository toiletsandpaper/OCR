
// ************************************************************************************************** //
//                                                                                                  
//                                         XML Data Binding                                         
//                                                                                                  
//         Generated on: 17.03.2020 19:29:29                                                        
//       Generated from: C:\Users\xFiLiNx\Documents\Embarcadero\Studio\Projects\OCR\Untitled1.xml   
//   Settings stored in: C:\Users\xFiLiNx\Documents\Embarcadero\Studio\Projects\OCR\Untitled1.xdb   
//                                                                                                  
// ************************************************************************************************** //

#include <System.hpp>
#pragma hdrstop

#include "Letters.h"


// Global Functions 

_di_IXMLlettersType __fastcall Getletters(Xml::Xmlintf::_di_IXMLDocument Doc)
{
  return (_di_IXMLlettersType) Doc->GetDocBinding("letters", __classid(TXMLlettersType), TargetNamespace);
};

_di_IXMLlettersType __fastcall Getletters(Xml::Xmldoc::TXMLDocument *Doc)
{
  Xml::Xmlintf::_di_IXMLDocument DocIntf;
  Doc->GetInterface(DocIntf);
  return Getletters(DocIntf);
};

_di_IXMLlettersType __fastcall Loadletters(const System::UnicodeString& FileName)
{
  return (_di_IXMLlettersType) Xml::Xmldoc::LoadXMLDocument(FileName)->GetDocBinding("letters", __classid(TXMLlettersType), TargetNamespace);
};

_di_IXMLlettersType __fastcall  Newletters()
{
  return (_di_IXMLlettersType) Xml::Xmldoc::NewXMLDocument()->GetDocBinding("letters", __classid(TXMLlettersType), TargetNamespace);
};

// TXMLlettersType 

void __fastcall TXMLlettersType::AfterConstruction(void)
{
  RegisterChildNode(System::UnicodeString("signature"), __classid(TXMLsignatureType));
  ItemTag = "signature";
  ItemInterface = __uuidof(IXMLsignatureType);
  Xml::Xmldoc::TXMLNodeCollection::AfterConstruction();
};

_di_IXMLsignatureType __fastcall TXMLlettersType::Get_signature(int Index)
{
  return (_di_IXMLsignatureType) List->Nodes[Index];
};

_di_IXMLsignatureType __fastcall TXMLlettersType::Add()
{
  return (_di_IXMLsignatureType) AddItem(-1);
};

_di_IXMLsignatureType __fastcall TXMLlettersType::Insert(const int Index)
{
  return (_di_IXMLsignatureType) AddItem(Index);
};

// TXMLsignatureType 

System::UnicodeString __fastcall TXMLsignatureType::Get_array()
{
  return GetChildNodes()->Nodes[System::UnicodeString("array")]->Text;
};

void __fastcall TXMLsignatureType::Set_array(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("array")]->NodeValue = Value;
};

char __fastcall TXMLsignatureType::Get_letter()
{
  return GetChildNodes()->Nodes[System::UnicodeString("letter")]->NodeValue.operator char();
};

void __fastcall TXMLsignatureType::Set_letter(char Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("letter")]->NodeValue = Value;
};

// TXMLsignatureTypeList 

_di_IXMLsignatureType __fastcall TXMLsignatureTypeList::Add()
{
  return (_di_IXMLsignatureType) AddItem(-1);
};

_di_IXMLsignatureType __fastcall TXMLsignatureTypeList::Insert(const int Index)
{
  return (_di_IXMLsignatureType) AddItem(Index);
};

_di_IXMLsignatureType __fastcall TXMLsignatureTypeList::Get_Item(int Index)
{
  return (_di_IXMLsignatureType) List->Nodes[Index];
};
