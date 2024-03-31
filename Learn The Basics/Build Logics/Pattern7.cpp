Problem statement
Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Triangle.

Example:
Input: ‘N’ = 3

Output: 

  *
 ***
*****

-------------------------------------------------------------------------------------------------------------------------------

  void nStarTriangle(int n) {
    for(int i=0;i<n;i++)
    {
        // space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }

        // star 
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }

        // space 
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }

        cout<<endl;
    
    }
}
