#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int N;
    cin >> N;

    vector<vector<int>> participants(N, vector<int>(5));
    for (int i = 0; i < N; i++) 
    {
        int roll_Number;
        cin >> roll_Number;
        for (int j = 0; j < 5; j++) 
        {
            cin >> participants[i][j];
        }
    }

    int M;
    cin >> M;

    vector<vector<int>> projects(M, vector<int>(5));
    for (int i = 0; i < M; i++) 
    {
        string project_Name;
        cin >> project_Name;
        for (int j = 0; j < 5; j++)
        {
            cin >> projects[i][j];
        }
    }

    int completed_projects = 0;
    for (int i = 0; i < M; i++)
    {
        bool all_roles_filled = true;
        bool mentor_found = false;
        for (int j = 0; j < 5; j++) 
        {
            if (projects[i][j] > 0) 
            {
                for (int k = 0; k < N; k++) 
                {
                    if (participants[k][j] >= projects[i][j]) 
                    {
                        all_roles_filled = true;
                        if (!mentor_found) 
                        {
                            mentor_found = true;
                            for (int l = 0; l < 5; l++) 
                            {
                                if (projects[i][l] > 0 && participants[k][l] > projects[i][l] && participants[k][l] - 1 == projects[i][j]) 
                                {
                                    break;
                                }
                            }
                        }
                        break;
                    }
                }
                if (!all_roles_filled)
                {
                    break;
                }
            }
        }
        if (all_roles_filled && mentor_found) 
        {
            completed_projects++;
        }
    }

    cout << completed_projects << endl;

    return 0;
}