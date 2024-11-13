#include <iostream>
#include <list>
#include <string>
#include <cstdlib> 
#include <ctime>   
#include <algorithm> 

using namespace std;

void assignProjects(const list<string>& teams, list<string>& projects) {
    srand(time(nullptr));

    vector<string> projectsVector(projects.begin(), projects.end());
    random_shuffle(projectsVector.begin(), projectsVector.end());

    cout << "Project Assignments:\n";
    
    auto projectIt = projectsVector.begin(); 

    for (const string& team : teams) {
        if (projectIt == projectsVector.end()) {
            projectIt = projectsVector.begin();
        }
        cout << team << ": Project " << *projectIt << endl;
        ++projectIt; 
    }
}

int main() {
    // list<string> teams;
    // teams.push_back("Inno2");
    // teams.push_back("Informaticus");
    // teams.push_back("TechTitans");
    // teams.push_back("Shlambalamba");
    // teams.push_back("Actually  Dumplings");
    // teams.push_back("The Autistics");
    // teams.push_back("Wise Fools");

    // list<string> projects;
    // projects.push_back("A");
    // projects.push_back("B");
    // projects.push_back("C");
    // projects.push_back("D");
    // projects.push_back("E");

    // assignProjects(teams, projects);

    for (int i=1;i<=5;++i){
        if(i%2 == 0){
            cout << i;
        }
    }

    return 0;
}
