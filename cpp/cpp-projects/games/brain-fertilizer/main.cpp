#include <iostream>
#include <string>
using namespace std;

void welcome();

void adventure3() {
  cout << '\n';
  cout << "good job you did it\n";
}
void adventure2() {
  cout << '\n';
  cout << "good job, you made it, I wonder what took you so long\n";
  cout << "now seperate all the words and count all the syllables\(theattheresomemyofbeuseherthanandthisanwouldfirstahaveeachmakewatertofromwhichlikebeeninorshehimcallisonedointowhoyouhadhowtimeoilthatbytheirhasitsitwordiflooknow)\n";
  int numSyl;
  cin >> numSyl;
  if (numSyl == 52) {
    adventure3();
  }
  else {
    adventure2();
  }
}
void adventure1() {
  cout << '\n';
  cout << "reverse this very long word:\n";
  cout << "wonkoolfidrowtistisahriehtybtahtlioemitwohdahuoyohwotniodenosillacmihehsronineebekilhcihwmorfotretawekamhcaeevahatsrifdluownasihtdnanahtrehesuebfoymemoserehttaeht\n";
  string bigWord;
  cin >> bigWord;
  if (bigWord == "theattheresomemyofbeuseherthanandthisanwouldfirstahaveeachmakewatertofromwhichlikebeeninorshehimcallisonedointowhoyouhadhowtimeoilthatbytheirhasitsitwordiflooknow") {
    adventure2();
  }
  else {
    adventure1();
  }
}
void rules() {
  cout << "please follow the following rules:\n";
  cout << "no looking up the answer/asking for help!\n";
  cout << "type \"1\" to move on\n";
  int rulesAgree;
  cin >> rulesAgree;
  if (rulesAgree == 1) {
    adventure1();
  }
  else {
    rules();
  }
}
void credits() {
  cout << "written by Yuriy Bidochko\n";
  cout << "github: https://github.com/ybidochko\n";
  cout << "type \"1\" to return to main menu\n";
  while (true) {
    int credAgree;
    cin >> credAgree;
    if (credAgree == 1) {
      welcome();
      break;
    }
  }
}
void whereTo() {
  cout << "press \"1\" to experience the adventure\n";//backslash lets compiler know to ignore the ""
  cout << "press \"2\" to view credits\n";
  int welcomeInt;
  cin >> welcomeInt;
  if (welcomeInt == 1) {
   rules();
  }
  else if (welcomeInt == 2) {
    credits();
  }
  else {
    cout << "invalid number\n";
    whereTo();
  }
}
void welcome() {
  cout << "+----------------------------------+\n";
  cout << "|                                  |\n";
  cout << "|                                  |\n";
  cout << "|                                  |\n";
  cout << "|                                  |\n";
  cout << "|   Welcome to Brain Fertilizer!   |\n";
  cout << "|                                  |\n";
  cout << "|                                  |\n";
  cout << "|                                  |\n";
  cout << "|                                  |\n";
  cout << "+----------------------------------+\n\n";
  whereTo();
}

int main() {

  //wonkoolfidrowtistisahriehtybtahtlioemitwohdahuoyohwotniodenosillacmihehsronineebekilhcihwmorfotretawekamhcaeevahatsrifdluownasihtdnanahtrehesuebfoymemoserehttaeht
  welcome();

//the at there some my of be use her than and this an would first a have each make water to from which like been in or she him call is one do into who you had how time oil that by their has its it word if look now


  return 0;
}