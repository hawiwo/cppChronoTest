object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 213
  ClientWidth = 316
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 16
    Top = 8
    Width = 3
    Height = 13
  end
  object Button1: TButton
    Left = 231
    Top = 8
    Width = 75
    Height = 25
    Caption = 'steady test'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 231
    Top = 39
    Width = 75
    Height = 25
    Caption = 'duration test'
    TabOrder = 1
    OnClick = Button2Click
  end
end
