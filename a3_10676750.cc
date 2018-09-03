#include <iostream>
#include <iomanip>
#include <cmath>
 using namespace std;

 int main (int argc,char**argv)
 {
  double score;
   cout << "Please enter your score: ";
   cin >> score;
   cout << setprecision(2)<< fixed;
   if (score > 100)
    cout << "You have entered an invalid score!\n" << "Try again!" << endl;
   else if (score < 0)
    cout << "You have entered an invalid score!\n" << "Try again!" << endl;
   else if (score >= 80)
    cout << "A" << endl;
   else if (score >= 75)
    cout << "B+" << endl;
   else  if (score >= 70)
    cout << "B" << endl;
   else if (score >= 65)
    cout << "C+" << endl;
   else if (score >= 60)
    cout << "C" << endl;
   else if (score >= 55)
    cout << "D+" << endl;
   else if (score >= 50)
    cout << "D" << endl;
   else if (score >= 45)
    cout << "E" << endl;
   else
    cout << "F" << endl;
  return 0;
 }
