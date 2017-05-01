cin>>n;
list <int> :: iterator p,te;
int i,temp,a[n];
for(i=0;i<n;i++)
    {
    cin>>a[i];
    l.push_front(a[i]);
}
for(i=0;i<n;i++)
    {
    l.push_back(a[i]);
}
for(t=l.begin();t!=l.end();t++)
    {
    cout<<*t<<" ";
}
cout<<endl;
l.sort();
l.unique();/*
for(t=l.begin();t!=l.end();t++)
    {
    cout<<*t*2<<" ";
}*/
for(i=0;i<n;i++)
    {
    
}
cout<<endl;
p=l.begin();
    t=l.end();
    t--;
*p=*p*2;
*t=*t*2;