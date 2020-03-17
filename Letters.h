
// ************************************************************************************************** //
//                                                                                                  
//                                         XML Data Binding                                         
//                                                                                                  
//         Generated on: 17.03.2020 19:29:29                                                        
//       Generated from: C:\Users\xFiLiNx\Documents\Embarcadero\Studio\Projects\OCR\Untitled1.xml   
//   Settings stored in: C:\Users\xFiLiNx\Documents\Embarcadero\Studio\Projects\OCR\Untitled1.xdb   
//                                                                                                  
// ************************************************************************************************** //

#ifndef   LettersH
#define   LettersH

#include <System.hpp>
#include <Xml.Xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <Xml.XMLDoc.hpp>
#include <XMLNodeImp.h>
#include <Xml.xmlutil.hpp>


// Forward Decls 

__interface IXMLlettersType;
typedef System::DelphiInterface<IXMLlettersType> _di_IXMLlettersType;
__interface IXMLsignatureType;
typedef System::DelphiInterface<IXMLsignatureType> _di_IXMLsignatureType;
__interface IXMLsignatureTypeList;
typedef System::DelphiInterface<IXMLsignatureTypeList> _di_IXMLsignatureTypeList;

// IXMLlettersType 

__interface INTERFACE_UUID("{2A28959E-F34C-411A-8F3C-815A809CBDF8}") IXMLlettersType : public Xml::Xmlintf::IXMLNodeCollection
{
public:
public:
  // Property Accessors 
  virtual _di_IXMLsignatureType __fastcall Get_signature(int Index) = 0;
  // Methods & Properties 
  virtual _di_IXMLsignatureType __fastcall Add() = 0;
  virtual _di_IXMLsignatureType __fastcall Insert(const int Index) = 0;
  __property _di_IXMLsignatureType signature[int Index] = { read=Get_signature };/* default */
};

// IXMLsignatureType 

__interface INTERFACE_UUID("{04B6F85A-7D5C-449A-BF2C-3509F80AB1A7}") IXMLsignatureType : public Xml::Xmlintf::IXMLNode
{
public:
  // Property Accessors 
  virtual System::UnicodeString __fastcall Get_array() = 0;
  virtual char __fastcall Get_letter() = 0;
  virtual void __fastcall Set_array(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_letter(char Value) = 0;
  // Methods & Properties 
  __property System::UnicodeString array = { read=Get_array, write=Set_array };
  __property char letter = { read=Get_letter, write=Set_letter };
};

// IXMLsignatureTypeList 

__interface INTERFACE_UUID("{7FA8360F-E6F2-49B0-8941-13F6CFA1C11C}") IXMLsignatureTypeList : public Xml::Xmlintf::IXMLNodeCollection
{
public:
  // Methods & Properties 
  virtual _di_IXMLsignatureType __fastcall Add() = 0;
  virtual _di_IXMLsignatureType __fastcall Insert(const int Index) = 0;

  virtual _di_IXMLsignatureType __fastcall Get_Item(int Index) = 0;
  __property _di_IXMLsignatureType Items[int Index] = { read=Get_Item /* default */ };
};

// Forward Decls 

class TXMLlettersType;
class TXMLsignatureType;
class TXMLsignatureTypeList;

// TXMLlettersType 

class TXMLlettersType : public Xml::Xmldoc::TXMLNodeCollection, public IXMLlettersType
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLlettersType 
  virtual _di_IXMLsignatureType __fastcall Get_signature(int Index);
  virtual _di_IXMLsignatureType __fastcall Add();
  virtual _di_IXMLsignatureType __fastcall Insert(const int Index);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLsignatureType 

class TXMLsignatureType : public Xml::Xmldoc::TXMLNode, public IXMLsignatureType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLsignatureType 
  virtual System::UnicodeString __fastcall Get_array();
  virtual char __fastcall Get_letter();
  virtual void __fastcall Set_array(System::UnicodeString Value);
  virtual void __fastcall Set_letter(char Value);
};

// TXMLsignatureTypeList 

class TXMLsignatureTypeList : public Xml::Xmldoc::TXMLNodeCollection, public IXMLsignatureTypeList
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLsignatureTypeList 
  virtual _di_IXMLsignatureType __fastcall Add();
  virtual _di_IXMLsignatureType __fastcall Insert(const int Index);

  virtual _di_IXMLsignatureType __fastcall Get_Item(int Index);
};

// Global Functions 

_di_IXMLlettersType __fastcall Getletters(Xml::Xmlintf::_di_IXMLDocument Doc);
_di_IXMLlettersType __fastcall Getletters(Xml::Xmldoc::TXMLDocument *Doc);
_di_IXMLlettersType __fastcall Loadletters(const System::UnicodeString& FileName);
_di_IXMLlettersType __fastcall  Newletters();

#define TargetNamespace ""

#endif