#import <cstdio>

#import "bots.hh"

using namespace std;

int main(int argc, char* argv[])
{
    User *alex = new User();
    alex->createBot("testbot");
    alex->addRule("testbot", "TA_EMA", constcomp, NULL, 900);
    alex->botList->at(0)->update();

}
