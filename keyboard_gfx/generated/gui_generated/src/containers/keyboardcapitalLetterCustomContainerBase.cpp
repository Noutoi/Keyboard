/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/keyboardcapitalLetterCustomContainerBase.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

keyboardcapitalLetterCustomContainerBase::keyboardcapitalLetterCustomContainerBase() :
    valueCapitalLetterCallback(0),
    flexButtonCallback(this, &keyboardcapitalLetterCustomContainerBase::flexButtonCallbackHandler)
{
    setWidth(259);
    setHeight(109);
    QFlexButton.setBitmaps(Bitmap(BITMAP_KEYBOARDBUTTON_ID), Bitmap(BITMAP_KEYBOARDBUTTONPRESSED_ID));
    QFlexButton.setBitmapXY(0, 0);
    QFlexButton.setText(TypedText(T_KEYBOARDCUSTOMCONTAINERTEXT_CAPITALQ));
    QFlexButton.setTextPosition(0, 7, 25, 35);
    QFlexButton.setTextColors(touchgfx::Color::getColorFromRGB(84, 84, 84), touchgfx::Color::getColorFromRGB(84, 84, 84));
    QFlexButton.setAction(flexButtonCallback);
    QFlexButton.setPosition(0, 0, 25, 35);
    add(QFlexButton);

    WFlexButton.setBitmaps(Bitmap(BITMAP_KEYBOARDBUTTON_ID), Bitmap(BITMAP_KEYBOARDBUTTONPRESSED_ID));
    WFlexButton.setBitmapXY(0, 0);
    WFlexButton.setText(TypedText(T_KEYBOARDCUSTOMCONTAINERTEXT_CAPITALW));
    WFlexButton.setTextPosition(0, 7, 25, 35);
    WFlexButton.setTextColors(touchgfx::Color::getColorFromRGB(84, 84, 84), touchgfx::Color::getColorFromRGB(84, 84, 84));
    WFlexButton.setAction(flexButtonCallback);
    WFlexButton.setPosition(26, 0, 25, 35);
    add(WFlexButton);

    EFlexButton.setBitmaps(Bitmap(BITMAP_KEYBOARDBUTTON_ID), Bitmap(BITMAP_KEYBOARDBUTTONPRESSED_ID));
    EFlexButton.setBitmapXY(0, 0);
    EFlexButton.setText(TypedText(T_KEYBOARDCUSTOMCONTAINERTEXT_CAPITALE));
    EFlexButton.setTextPosition(0, 7, 25, 35);
    EFlexButton.setTextColors(touchgfx::Color::getColorFromRGB(84, 84, 84), touchgfx::Color::getColorFromRGB(84, 84, 84));
    EFlexButton.setAction(flexButtonCallback);
    EFlexButton.setPosition(52, 0, 25, 35);
    add(EFlexButton);

    RFlexButton.setBitmaps(Bitmap(BITMAP_KEYBOARDBUTTON_ID), Bitmap(BITMAP_KEYBOARDBUTTONPRESSED_ID));
    RFlexButton.setBitmapXY(0, 0);
    RFlexButton.setText(TypedText(T_KEYBOARDCUSTOMCONTAINERTEXT_CAPITALR));
    RFlexButton.setTextPosition(0, 7, 25, 35);
    RFlexButton.setTextColors(touchgfx::Color::getColorFromRGB(84, 84, 84), touchgfx::Color::getColorFromRGB(84, 84, 84));
    RFlexButton.setAction(flexButtonCallback);
    RFlexButton.setPosition(78, 0, 25, 35);
    add(RFlexButton);

    TFlexButton.setBitmaps(Bitmap(BITMAP_KEYBOARDBUTTON_ID), Bitmap(BITMAP_KEYBOARDBUTTONPRESSED_ID));
    TFlexButton.setBitmapXY(0, 0);
    TFlexButton.setText(TypedText(T_KEYBOARDCUSTOMCONTAINERTEXT_CAPITALT));
    TFlexButton.setTextPosition(0, 7, 25, 35);
    TFlexButton.setTextColors(touchgfx::Color::getColorFromRGB(84, 84, 84), touchgfx::Color::getColorFromRGB(84, 84, 84));
    TFlexButton.setAction(flexButtonCallback);
    TFlexButton.setPosition(104, 0, 25, 35);
    add(TFlexButton);

    YFlexButton.setBitmaps(Bitmap(BITMAP_KEYBOARDBUTTON_ID), Bitmap(BITMAP_KEYBOARDBUTTONPRESSED_ID));
    YFlexButton.setBitmapXY(0, 0);
    YFlexButton.setText(TypedText(T_KEYBOARDCUSTOMCONTAINERTEXT_CAPITALY));
    YFlexButton.setTextPosition(0, 7, 25, 35);
    YFlexButton.setTextColors(touchgfx::Color::getColorFromRGB(84, 84, 84), touchgfx::Color::getColorFromRGB(84, 84, 84));
    YFlexButton.setAction(flexButtonCallback);
    YFlexButton.setPosition(130, 0, 25, 35);
    add(YFlexButton);

    UFlexButton.setBitmaps(Bitmap(BITMAP_KEYBOARDBUTTON_ID), Bitmap(BITMAP_KEYBOARDBUTTONPRESSED_ID));
    UFlexButton.setBitmapXY(0, 0);
    UFlexButton.setText(TypedText(T_KEYBOARDCUSTOMCONTAINERTEXT_CAPITALU));
    UFlexButton.setTextPosition(0, 7, 25, 35);
    UFlexButton.setTextColors(touchgfx::Color::getColorFromRGB(84, 84, 84), touchgfx::Color::getColorFromRGB(84, 84, 84));
    UFlexButton.setAction(flexButtonCallback);
    UFlexButton.setPosition(156, 0, 25, 35);
    add(UFlexButton);

    IFlexButton.setBitmaps(Bitmap(BITMAP_KEYBOARDBUTTON_ID), Bitmap(BITMAP_KEYBOARDBUTTONPRESSED_ID));
    IFlexButton.setBitmapXY(0, 0);
    IFlexButton.setText(TypedText(T_KEYBOARDCUSTOMCONTAINERTEXT_CAPITALI));
    IFlexButton.setTextPosition(0, 7, 25, 35);
    IFlexButton.setTextColors(touchgfx::Color::getColorFromRGB(84, 84, 84), touchgfx::Color::getColorFromRGB(84, 84, 84));
    IFlexButton.setAction(flexButtonCallback);
    IFlexButton.setPosition(182, 0, 25, 35);
    add(IFlexButton);

    OFlexButton.setBitmaps(Bitmap(BITMAP_KEYBOARDBUTTON_ID), Bitmap(BITMAP_KEYBOARDBUTTONPRESSED_ID));
    OFlexButton.setBitmapXY(0, 0);
    OFlexButton.setText(TypedText(T_KEYBOARDCUSTOMCONTAINERTEXT_CAPITALO));
    OFlexButton.setTextPosition(0, 7, 25, 35);
    OFlexButton.setTextColors(touchgfx::Color::getColorFromRGB(84, 84, 84), touchgfx::Color::getColorFromRGB(84, 84, 84));
    OFlexButton.setAction(flexButtonCallback);
    OFlexButton.setPosition(208, 0, 25, 35);
    add(OFlexButton);

    PFlexButton.setBitmaps(Bitmap(BITMAP_KEYBOARDBUTTON_ID), Bitmap(BITMAP_KEYBOARDBUTTONPRESSED_ID));
    PFlexButton.setBitmapXY(0, 0);
    PFlexButton.setText(TypedText(T_KEYBOARDCUSTOMCONTAINERTEXT_CAPITALP));
    PFlexButton.setTextPosition(0, 7, 25, 35);
    PFlexButton.setTextColors(touchgfx::Color::getColorFromRGB(84, 84, 84), touchgfx::Color::getColorFromRGB(84, 84, 84));
    PFlexButton.setAction(flexButtonCallback);
    PFlexButton.setPosition(234, 0, 25, 35);
    add(PFlexButton);

    AFlexButton.setBitmaps(Bitmap(BITMAP_KEYBOARDBUTTON_ID), Bitmap(BITMAP_KEYBOARDBUTTONPRESSED_ID));
    AFlexButton.setBitmapXY(0, 0);
    AFlexButton.setText(TypedText(T_KEYBOARDCUSTOMCONTAINERTEXT_CAPITALA));
    AFlexButton.setTextPosition(0, 7, 25, 35);
    AFlexButton.setTextColors(touchgfx::Color::getColorFromRGB(84, 84, 84), touchgfx::Color::getColorFromRGB(84, 84, 84));
    AFlexButton.setAction(flexButtonCallback);
    AFlexButton.setPosition(14, 37, 25, 35);
    add(AFlexButton);

    SFlexButton.setBitmaps(Bitmap(BITMAP_KEYBOARDBUTTON_ID), Bitmap(BITMAP_KEYBOARDBUTTONPRESSED_ID));
    SFlexButton.setBitmapXY(0, 0);
    SFlexButton.setText(TypedText(T_KEYBOARDCUSTOMCONTAINERTEXT_CAPITALS));
    SFlexButton.setTextPosition(0, 7, 25, 35);
    SFlexButton.setTextColors(touchgfx::Color::getColorFromRGB(84, 84, 84), touchgfx::Color::getColorFromRGB(84, 84, 84));
    SFlexButton.setAction(flexButtonCallback);
    SFlexButton.setPosition(40, 37, 25, 35);
    add(SFlexButton);

    DFlexButton.setBitmaps(Bitmap(BITMAP_KEYBOARDBUTTON_ID), Bitmap(BITMAP_KEYBOARDBUTTONPRESSED_ID));
    DFlexButton.setBitmapXY(0, 0);
    DFlexButton.setText(TypedText(T_KEYBOARDCUSTOMCONTAINERTEXT_CAPITALD));
    DFlexButton.setTextPosition(0, 7, 25, 35);
    DFlexButton.setTextColors(touchgfx::Color::getColorFromRGB(84, 84, 84), touchgfx::Color::getColorFromRGB(84, 84, 84));
    DFlexButton.setAction(flexButtonCallback);
    DFlexButton.setPosition(66, 37, 25, 35);
    add(DFlexButton);

    FFlexButton.setBitmaps(Bitmap(BITMAP_KEYBOARDBUTTON_ID), Bitmap(BITMAP_KEYBOARDBUTTONPRESSED_ID));
    FFlexButton.setBitmapXY(0, 0);
    FFlexButton.setText(TypedText(T_KEYBOARDCUSTOMCONTAINERTEXT_CAPITALF));
    FFlexButton.setTextPosition(0, 7, 25, 35);
    FFlexButton.setTextColors(touchgfx::Color::getColorFromRGB(84, 84, 84), touchgfx::Color::getColorFromRGB(84, 84, 84));
    FFlexButton.setAction(flexButtonCallback);
    FFlexButton.setPosition(92, 37, 25, 35);
    add(FFlexButton);

    GFlexButton.setBitmaps(Bitmap(BITMAP_KEYBOARDBUTTON_ID), Bitmap(BITMAP_KEYBOARDBUTTONPRESSED_ID));
    GFlexButton.setBitmapXY(0, 0);
    GFlexButton.setText(TypedText(T_KEYBOARDCUSTOMCONTAINERTEXT_CAPITALG));
    GFlexButton.setTextPosition(0, 7, 25, 35);
    GFlexButton.setTextColors(touchgfx::Color::getColorFromRGB(84, 84, 84), touchgfx::Color::getColorFromRGB(84, 84, 84));
    GFlexButton.setAction(flexButtonCallback);
    GFlexButton.setPosition(118, 37, 25, 35);
    add(GFlexButton);

    HFlexButton.setBitmaps(Bitmap(BITMAP_KEYBOARDBUTTON_ID), Bitmap(BITMAP_KEYBOARDBUTTONPRESSED_ID));
    HFlexButton.setBitmapXY(0, 0);
    HFlexButton.setText(TypedText(T_KEYBOARDCUSTOMCONTAINERTEXT_CAPITALH));
    HFlexButton.setTextPosition(0, 7, 25, 35);
    HFlexButton.setTextColors(touchgfx::Color::getColorFromRGB(84, 84, 84), touchgfx::Color::getColorFromRGB(84, 84, 84));
    HFlexButton.setAction(flexButtonCallback);
    HFlexButton.setPosition(144, 37, 25, 35);
    add(HFlexButton);

    JFlexButton.setBitmaps(Bitmap(BITMAP_KEYBOARDBUTTON_ID), Bitmap(BITMAP_KEYBOARDBUTTONPRESSED_ID));
    JFlexButton.setBitmapXY(0, 0);
    JFlexButton.setText(TypedText(T_KEYBOARDCUSTOMCONTAINERTEXT_CAPITALJ));
    JFlexButton.setTextPosition(0, 7, 25, 35);
    JFlexButton.setTextColors(touchgfx::Color::getColorFromRGB(84, 84, 84), touchgfx::Color::getColorFromRGB(84, 84, 84));
    JFlexButton.setAction(flexButtonCallback);
    JFlexButton.setPosition(170, 37, 25, 35);
    add(JFlexButton);

    KFlexButton.setBitmaps(Bitmap(BITMAP_KEYBOARDBUTTON_ID), Bitmap(BITMAP_KEYBOARDBUTTONPRESSED_ID));
    KFlexButton.setBitmapXY(0, 0);
    KFlexButton.setText(TypedText(T_KEYBOARDCUSTOMCONTAINERTEXT_CAPITALK));
    KFlexButton.setTextPosition(0, 7, 25, 35);
    KFlexButton.setTextColors(touchgfx::Color::getColorFromRGB(84, 84, 84), touchgfx::Color::getColorFromRGB(84, 84, 84));
    KFlexButton.setAction(flexButtonCallback);
    KFlexButton.setPosition(196, 37, 25, 35);
    add(KFlexButton);

    LFlexButton.setBitmaps(Bitmap(BITMAP_KEYBOARDBUTTON_ID), Bitmap(BITMAP_KEYBOARDBUTTONPRESSED_ID));
    LFlexButton.setBitmapXY(0, 0);
    LFlexButton.setText(TypedText(T_KEYBOARDCUSTOMCONTAINERTEXT_CAPITALL));
    LFlexButton.setTextPosition(0, 7, 25, 35);
    LFlexButton.setTextColors(touchgfx::Color::getColorFromRGB(84, 84, 84), touchgfx::Color::getColorFromRGB(84, 84, 84));
    LFlexButton.setAction(flexButtonCallback);
    LFlexButton.setPosition(222, 37, 25, 35);
    add(LFlexButton);

    ZFlexButton.setBitmaps(Bitmap(BITMAP_KEYBOARDBUTTON_ID), Bitmap(BITMAP_KEYBOARDBUTTONPRESSED_ID));
    ZFlexButton.setBitmapXY(0, 0);
    ZFlexButton.setText(TypedText(T_KEYBOARDCUSTOMCONTAINERTEXT_CAPITALZ));
    ZFlexButton.setTextPosition(0, 7, 25, 35);
    ZFlexButton.setTextColors(touchgfx::Color::getColorFromRGB(84, 84, 84), touchgfx::Color::getColorFromRGB(84, 84, 84));
    ZFlexButton.setAction(flexButtonCallback);
    ZFlexButton.setPosition(41, 74, 25, 35);
    add(ZFlexButton);

    XFlexButton.setBitmaps(Bitmap(BITMAP_KEYBOARDBUTTON_ID), Bitmap(BITMAP_KEYBOARDBUTTONPRESSED_ID));
    XFlexButton.setBitmapXY(0, 0);
    XFlexButton.setText(TypedText(T_KEYBOARDCUSTOMCONTAINERTEXT_CAPITALX));
    XFlexButton.setTextPosition(0, 7, 25, 35);
    XFlexButton.setTextColors(touchgfx::Color::getColorFromRGB(84, 84, 84), touchgfx::Color::getColorFromRGB(84, 84, 84));
    XFlexButton.setAction(flexButtonCallback);
    XFlexButton.setPosition(67, 74, 25, 35);
    add(XFlexButton);

    CFlexButton.setBitmaps(Bitmap(BITMAP_KEYBOARDBUTTON_ID), Bitmap(BITMAP_KEYBOARDBUTTONPRESSED_ID));
    CFlexButton.setBitmapXY(0, 0);
    CFlexButton.setText(TypedText(T_KEYBOARDCUSTOMCONTAINERTEXT_CAPITALC));
    CFlexButton.setTextPosition(0, 7, 25, 35);
    CFlexButton.setTextColors(touchgfx::Color::getColorFromRGB(84, 84, 84), touchgfx::Color::getColorFromRGB(84, 84, 84));
    CFlexButton.setAction(flexButtonCallback);
    CFlexButton.setPosition(93, 74, 25, 35);
    add(CFlexButton);

    VFlexButton.setBitmaps(Bitmap(BITMAP_KEYBOARDBUTTON_ID), Bitmap(BITMAP_KEYBOARDBUTTONPRESSED_ID));
    VFlexButton.setBitmapXY(0, 0);
    VFlexButton.setText(TypedText(T_KEYBOARDCUSTOMCONTAINERTEXT_CAPITALV));
    VFlexButton.setTextPosition(0, 7, 25, 35);
    VFlexButton.setTextColors(touchgfx::Color::getColorFromRGB(84, 84, 84), touchgfx::Color::getColorFromRGB(84, 84, 84));
    VFlexButton.setAction(flexButtonCallback);
    VFlexButton.setPosition(119, 74, 25, 35);
    add(VFlexButton);

    BFlexButton.setBitmaps(Bitmap(BITMAP_KEYBOARDBUTTON_ID), Bitmap(BITMAP_KEYBOARDBUTTONPRESSED_ID));
    BFlexButton.setBitmapXY(0, 0);
    BFlexButton.setText(TypedText(T_KEYBOARDCUSTOMCONTAINERTEXT_CAPITALB));
    BFlexButton.setTextPosition(0, 7, 25, 35);
    BFlexButton.setTextColors(touchgfx::Color::getColorFromRGB(84, 84, 84), touchgfx::Color::getColorFromRGB(84, 84, 84));
    BFlexButton.setAction(flexButtonCallback);
    BFlexButton.setPosition(145, 74, 25, 35);
    add(BFlexButton);

    NFlexButton.setBitmaps(Bitmap(BITMAP_KEYBOARDBUTTON_ID), Bitmap(BITMAP_KEYBOARDBUTTONPRESSED_ID));
    NFlexButton.setBitmapXY(0, 0);
    NFlexButton.setText(TypedText(T_KEYBOARDCUSTOMCONTAINERTEXT_CAPITALN));
    NFlexButton.setTextPosition(0, 7, 25, 35);
    NFlexButton.setTextColors(touchgfx::Color::getColorFromRGB(84, 84, 84), touchgfx::Color::getColorFromRGB(84, 84, 84));
    NFlexButton.setAction(flexButtonCallback);
    NFlexButton.setPosition(171, 74, 25, 35);
    add(NFlexButton);

    MFlexButton.setBitmaps(Bitmap(BITMAP_KEYBOARDBUTTON_ID), Bitmap(BITMAP_KEYBOARDBUTTONPRESSED_ID));
    MFlexButton.setBitmapXY(0, 0);
    MFlexButton.setText(TypedText(T_KEYBOARDCUSTOMCONTAINERTEXT_CAPITALM));
    MFlexButton.setTextPosition(0, 7, 25, 35);
    MFlexButton.setTextColors(touchgfx::Color::getColorFromRGB(84, 84, 84), touchgfx::Color::getColorFromRGB(84, 84, 84));
    MFlexButton.setAction(flexButtonCallback);
    MFlexButton.setPosition(197, 74, 25, 35);
    add(MFlexButton);
}

keyboardcapitalLetterCustomContainerBase::~keyboardcapitalLetterCustomContainerBase()
{

}

void keyboardcapitalLetterCustomContainerBase::initialize()
{

}

void keyboardcapitalLetterCustomContainerBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &MFlexButton)
    {
        //writeCharacterCapitalM
        //When MFlexButton clicked emit valueCapitalLetter callback
        //Emit callback
        emitValueCapitalLetterCallback('M');
    }
    if (&src == &NFlexButton)
    {
        //writeCharacterCapitalN
        //When NFlexButton clicked emit valueCapitalLetter callback
        //Emit callback
        emitValueCapitalLetterCallback('N');
    }
    if (&src == &BFlexButton)
    {
        //writeCharacterCapitalB
        //When BFlexButton clicked emit valueCapitalLetter callback
        //Emit callback
        emitValueCapitalLetterCallback('B');
    }
    if (&src == &VFlexButton)
    {
        //writeCharacterCapitalV
        //When VFlexButton clicked emit valueCapitalLetter callback
        //Emit callback
        emitValueCapitalLetterCallback('V');
    }
    if (&src == &CFlexButton)
    {
        //writeCharacterCapitalC
        //When CFlexButton clicked emit valueCapitalLetter callback
        //Emit callback
        emitValueCapitalLetterCallback('C');
    }
    if (&src == &XFlexButton)
    {
        //writeCharacterCapitalX
        //When XFlexButton clicked emit valueCapitalLetter callback
        //Emit callback
        emitValueCapitalLetterCallback('X');
    }
    if (&src == &ZFlexButton)
    {
        //writeCharacterCapitalZ
        //When ZFlexButton clicked emit valueCapitalLetter callback
        //Emit callback
        emitValueCapitalLetterCallback('Z');
    }
    if (&src == &LFlexButton)
    {
        //writeCharacterCapitalL
        //When LFlexButton clicked emit valueCapitalLetter callback
        //Emit callback
        emitValueCapitalLetterCallback('L');
    }
    if (&src == &KFlexButton)
    {
        //writeCharacterCapitalK
        //When KFlexButton clicked emit valueCapitalLetter callback
        //Emit callback
        emitValueCapitalLetterCallback('K');
    }
    if (&src == &JFlexButton)
    {
        //writeCharacterCapitalJ
        //When JFlexButton clicked emit valueCapitalLetter callback
        //Emit callback
        emitValueCapitalLetterCallback('J');
    }
    if (&src == &HFlexButton)
    {
        //writeCharacterCapitalH
        //When HFlexButton clicked emit valueCapitalLetter callback
        //Emit callback
        emitValueCapitalLetterCallback('H');
    }
    if (&src == &GFlexButton)
    {
        //writeCharacterCapitalG
        //When GFlexButton clicked emit valueCapitalLetter callback
        //Emit callback
        emitValueCapitalLetterCallback('G');
    }
    if (&src == &FFlexButton)
    {
        //writeCharacterCapitalF
        //When FFlexButton clicked emit valueCapitalLetter callback
        //Emit callback
        emitValueCapitalLetterCallback('F');
    }
    if (&src == &DFlexButton)
    {
        //writeCharacterCapitalD
        //When DFlexButton clicked emit valueCapitalLetter callback
        //Emit callback
        emitValueCapitalLetterCallback('D');
    }
    if (&src == &SFlexButton)
    {
        //writeCharacterCapitalS
        //When SFlexButton clicked emit valueCapitalLetter callback
        //Emit callback
        emitValueCapitalLetterCallback('S');
    }
    if (&src == &AFlexButton)
    {
        //writeCharacterCapitalA
        //When AFlexButton clicked emit valueCapitalLetter callback
        //Emit callback
        emitValueCapitalLetterCallback('A');
    }
    if (&src == &PFlexButton)
    {
        //writeCharacterCapitalP
        //When PFlexButton clicked emit valueCapitalLetter callback
        //Emit callback
        emitValueCapitalLetterCallback('P');
    }
    if (&src == &OFlexButton)
    {
        //writeCharacterCapitalO
        //When OFlexButton clicked emit valueCapitalLetter callback
        //Emit callback
        emitValueCapitalLetterCallback('O');
    }
    if (&src == &IFlexButton)
    {
        //writeCharacterCapitalI
        //When IFlexButton clicked emit valueCapitalLetter callback
        //Emit callback
        emitValueCapitalLetterCallback('I');
    }
    if (&src == &UFlexButton)
    {
        //writeCharacterCapitalU
        //When UFlexButton clicked emit valueCapitalLetter callback
        //Emit callback
        emitValueCapitalLetterCallback('U');
    }
    if (&src == &YFlexButton)
    {
        //writeCharacterCapitalY
        //When YFlexButton clicked emit valueCapitalLetter callback
        //Emit callback
        emitValueCapitalLetterCallback('Y');
    }
    if (&src == &TFlexButton)
    {
        //writeCharacterCapitalT
        //When TFlexButton clicked emit valueCapitalLetter callback
        //Emit callback
        emitValueCapitalLetterCallback('T');
    }
    if (&src == &RFlexButton)
    {
        //writeCharacterCapitalR
        //When RFlexButton clicked emit valueCapitalLetter callback
        //Emit callback
        emitValueCapitalLetterCallback('R');
    }
    if (&src == &EFlexButton)
    {
        //writeCharacterCapitalE
        //When EFlexButton clicked emit valueCapitalLetter callback
        //Emit callback
        emitValueCapitalLetterCallback('E');
    }
    if (&src == &WFlexButton)
    {
        //writeCharacterCapitalW
        //When WFlexButton clicked emit valueCapitalLetter callback
        //Emit callback
        emitValueCapitalLetterCallback('W');
    }
    if (&src == &QFlexButton)
    {
        //writeCharacterCapitalQ
        //When QFlexButton clicked emit valueCapitalLetter callback
        //Emit callback
        emitValueCapitalLetterCallback('Q');
    }
}
