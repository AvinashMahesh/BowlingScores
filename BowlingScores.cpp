#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 int w1, w2, w3, f1, f2, f3, m1, m2, m3, p1, p2, p3, wtot, ftot, mtot, ptot, tt;
 float wa, fa, ma, pa, ta;
 cout << fixed << setprecision(1);
 cout << "Enter Weber's game scores." << endl;
 cin >> w1 >> w2 >> w3;
 cout << "Enter Fazio's game scores." << endl;
 cin >> f1 >> f2 >> f3;
 cout << "Enter Martin's game scores." << endl;
 cin >> m1 >> m2 >> m3;
 cout << "Enter Patterson's game scores." << endl;
 cin >> p1 >> p2 >> p3;
 cout << endl;
 cout << setw(10)<< "Name" << setw(10) << "Game 1" << setw(10) << "Game 2" << setw(10) << "Game 3" << setw(10) << "Total" << setw(10) << "Average" << endl;
 cout << setw(10) << "----" << setw(10) << "------" << setw(10) << "------"<< setw(10) << "------"<< setw(10) << "-----"<< setw(10) << "-------"<< endl;
 wtot = w1 + w2 + w3;
 wa = wtot/3.0;
 cout << setw(10)<< "Weber" << setw(10)<< w1 << setw(10) << w2 << setw(10) << w3 << setw(10) << wtot << setw(10) << wa << endl;
 ftot = f1+f2+f3;
 fa=ftot/3.0;
 cout << setw(10)<< "Fazio" << setw(10)<< f1 << setw(10) << f2 << setw(10) << f3 << setw(10) << ftot << setw(10) << fa << endl;
 mtot=m1+m2+m3;
 ma=mtot/3.0;
 cout << setw(10)<< "Martin" << setw(10)<< m1 << setw(10) << m2 << setw(10) << m3 << setw(10) << mtot << setw(10) << ma << endl;
 ptot=p1+p2+p3;
 pa=ptot/3.0;
 cout << setw(10)<< "Patterson" << setw(10)<< p1 << setw(10) << p2 << setw(10) << p3 << setw(10) << ptot << setw(10) << pa << endl;
 cout << endl;
 tt=wtot+ftot+mtot+ptot;
 cout << setw(15) << "Team Total:" << setw(10) << tt << endl;
 ta=tt/4.0;
 cout << setw(15) << "Team Average:" << setw(10) << ta << endl;
return 0;
}
