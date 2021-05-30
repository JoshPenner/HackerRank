/*
Problem: https://www.hackerrank.com/challenges/prettyprint/problem
*/
        
		// print A
        cout.flags(ios::left);
        cout << showbase << hex <<(long long int)A << endl;
        
        // print B
        cout.flags(ios::right);
        cout << setfill('_') << setw(15);
        cout << fixed << setprecision(2) << showpos << B << endl;
        
        // print C
        cout << noshowpos << scientific << uppercase << setprecision(9) << C << endl;

