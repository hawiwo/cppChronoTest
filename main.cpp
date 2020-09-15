// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

// ---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) :
	TForm(Owner)
{
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	using namespace std;
	stringstream ss;

	ss << "system_clock" << endl;
	ss << chrono::system_clock::period::num << endl;
	ss << chrono::system_clock::period::den << endl;
	ss << "steady = " << boolalpha << chrono::system_clock::is_steady << endl << endl;

	ss << "high_resolution_clock" << endl;
	ss << chrono::high_resolution_clock::period::num << endl;
	ss << chrono::high_resolution_clock::period::den << endl;
	ss << "steady = " << boolalpha << chrono::high_resolution_clock::is_steady << endl << endl;

	ss << "steady_clock" << endl;
	ss << chrono::steady_clock::period::num << endl;
	ss << chrono::steady_clock::period::den << endl;
	ss << "steady = " << boolalpha << chrono::steady_clock::is_steady << endl << endl;

	Label1->Caption = ss.str().c_str();
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	using namespace std;
	stringstream ss;
	auto start = chrono::steady_clock::now();

	Sleep(52);
	auto end = chrono::steady_clock::now();

	// Store the time difference between start and end
	auto diff = end - start;
	ss << chrono::duration<double, milli>(diff).count() << " ms" << endl;
	Label1->Caption = ss.str().c_str();
}
// ---------------------------------------------------------------------------
