#include <iostream>

using namespace std;

/**
 * Calculate the WALL-E's moving time
 */
int main () {
    float dx = 3.0f;
    float dy = 10.0f;
    float s1 = 5.0f;
    float s2 = 2.0f;
    float L1 = 6.0f;
    string separator = "========================================";

    cout << separator << endl;
    cout << "Hello there!" << endl;
    cout << "This program is about to compute how long WALL-E's moving to the object." << endl;
    cout << "Here are the data:" << endl;
    cout << "On a " << dy << "km road, he will move at " << s1 << "km/h" << endl;
    cout << "On a dirt path, he will move at " << s2 << "km/h" << endl;
    cout << "The length of the dirt path has to be calculated" << endl;
    cout << separator << endl;

    string wannaDefine = "Y";
    cout << "Would you like to defin the length of the road ? (Y/n)" << endl;
    getline(cin, wannaDefine);


    if (wannaDefine != "n" && wannaDefine != "N") {
        cout << "Then how long is that road ? (km)" << endl;
        cin >> L1;
        cout << separator << endl;
    }

    // calculate the hypotenuse of the dirt path (L2)
    float L2 = (sqrt(pow((dy - L1), 2) + pow(dx, 2)));

    float timeToTravel1 = L1 / s1;
    float timeToTravel2 = L2 / s2;
    float totalTime = timeToTravel1 + timeToTravel2;
    float minutes = round((totalTime - floor(totalTime)) * 60);

    cout << "WALL-E's about to take about " << int(totalTime) << " hours and " << minutes << " minutes to reach the object on a " << L1 + L2 << "km long way"<< endl;
}