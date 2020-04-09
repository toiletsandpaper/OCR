object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'OCR'
  ClientHeight = 507
  ClientWidth = 822
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 72
    Top = 24
    Width = 160
    Height = 160
    OnMouseMove = Image1MouseMove
  end
  object Image2: TImage
    Left = 576
    Top = 24
    Width = 160
    Height = 160
  end
  object Label1: TLabel
    Left = 433
    Top = 29
    Width = 3
    Height = 13
  end
  object Label2: TLabel
    Left = 394
    Top = 29
    Width = 33
    Height = 13
    Caption = 'Letter:'
  end
  object ClearButton: TButton
    Left = 280
    Top = 24
    Width = 75
    Height = 25
    Caption = 'Clear'
    TabOrder = 0
    OnClick = ClearButtonClick
  end
  object TransformButton: TButton
    Left = 280
    Top = 80
    Width = 75
    Height = 25
    Caption = 'Transform'
    TabOrder = 1
    OnClick = TransformButtonClick
  end
  object StringGrid1: TStringGrid
    Left = 230
    Top = 130
    Width = 345
    Height = 345
    ColCount = 16
    DefaultColWidth = 20
    DefaultRowHeight = 20
    FixedCols = 0
    RowCount = 16
    FixedRows = 0
    TabOrder = 2
  end
  object SaveXMLButton: TButton
    Left = 480
    Top = 80
    Width = 75
    Height = 25
    Caption = 'SaveXML'
    Enabled = False
    TabOrder = 3
    OnClick = SaveXMLButtonClick
  end
  object Edit1: TEdit
    Left = 433
    Top = 82
    Width = 41
    Height = 21
    MaxLength = 1
    TabOrder = 4
    TextHint = 'Letter'
    OnChange = Edit1Change
  end
  object CheckButton: TButton
    Left = 480
    Top = 24
    Width = 75
    Height = 25
    Caption = 'Check'
    TabOrder = 5
    OnClick = CheckButtonClick
  end
  object XMLDocument1: TXMLDocument
    NodeIndentStr = '    '
    Options = [doNodeAutoCreate, doNodeAutoIndent, doAttrNull, doAutoPrefix, doNamespaceDecl]
    XML.Strings = (
      '<?xml version="1.0" encoding="UTF-8"?>'
      '<letters>'
      '   <signature>'
      
        '      <array>000000000000000000000000000000000000000000001100000' +
        '0000000001100000000000000010000110000000001000011000000000110001' +
        '1000000000110001100110000011000110011100001100011001011000110001' +
        '1011011101100001111000111110000011000000000000000000000000000000' +
        '0000000000000</array>'
      '      <letter>51</letter>'
      '   </signature>'
      '   <signature>'
      
        '      <array>000000000111000000000011111111000000011100001100000' +
        '0110000000100000110000000010000110000000001000011000000000100011' +
        '0000000000100011000000000110001100000000011000110000000001100001' +
        '1000000111000001110001111000000001111110000000000000000000000000' +
        '0000000000000</array>'
      '      <letter>79</letter>'
      '   </signature>'
      '   <signature>'
      
        '      <array>000000000000000000000000000000000000011111100000000' +
        '0111000110000000110000001100000010000000011000011000000001100001' +
        '1000000001000001100000000100000110000000010000011000000011000000' +
        '1100000011000000010000001000000000000000000000000000000000000000' +
        '0000000000000</array>'
      '      <letter>67</letter>'
      '   </signature>'
      '   <signature>'
      
        '      <array>000000000000000000000000000000000000001111100000000' +
        '0111111110000000110000001100000010000000010000011000000001100001' +
        '1000000001100001100000000100000110000000110000001000000111000000' +
        '1111111100000000011111000000000000000000000000000000000000000000' +
        '0000000000000</array>'
      '      <letter>79</letter>'
      '   </signature>'
      '   <signature>'
      
        '      <array>000000000000000000000000000000110000000000001110000' +
        '0000000111100000000001111000000001111111000000111110000100000111' +
        '0000001100000111111000110000000011111111000000000000111100000000' +
        '0000001111000000000000001111000000000000000110000000000000000000' +
        '0000000000000</array>'
      '      <letter>65</letter>'
      '   </signature>'
      '   <signature>'
      
        '      <array>000000000000000000000000000000000001000000000000001' +
        '1000000000000001100000000000000110000000000000011000000111000001' +
        '1111111111000001100000000000000110000000000000011000000000000001' +
        '1000000000000001100000000000000000000000000000000000000000000000' +
        '0000000000000</array>'
      '      <letter>84</letter>'
      '   </signature>'
      '   <signature>'
      
        '      <array>000000000000000000000000000000000000000000000000000' +
        '0000000000000000001111110000000001100001100000000100000010000000' +
        '1100000010000000110000011000000011000001000000000100000000000000' +
        '0000000000000000000000000000000000000000000000000000000000000000' +
        '0000000000000</array>'
      '      <letter>67</letter>'
      '   </signature>'
      '   <signature>'
      
        '      <array>000000000000000000000000000000000000000000000000000' +
        '0000000000000000100000000000000011111100000000000000111111000000' +
        '0000000111000000000111111000000001111000000000011100000000000000' +
        '0000000000000000000000000000000000000000000000000000000000000000' +
        '0000000000000</array>'
      '      <letter>86</letter>'
      '   </signature>'
      '</letters>')
    Left = 616
    Top = 240
    DOMVendorDesc = 'MSXML'
  end
end
