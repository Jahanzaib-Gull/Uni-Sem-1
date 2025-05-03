    #include<iostream>
    using namespace std;

    main(){
        int num;
        cout<<"Enter number of rows:";
        cin>>num;

        for(int i=1; i<=num; i++){
            for(int j=1; j<i; j++){
                cout<<" ";
            }
            for (int k=num; k>=i; k--){
                cout<<"* ";
            }
            cout<<endl;
        }
        for(int x=2;x<=num;x++){
            for(int y=1;y<=num-x;y++){
                cout<<" ";
            }
            for(int z=1;z<=x;z++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }