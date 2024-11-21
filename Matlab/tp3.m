a=randi([-100,100],3,3);
a=[10 -2 4;3 0 6;5 1 -90]
minimum_colonne=min(a);
maximum_colonne=max(a);
minimum_ligne=min(a,[],2);
maximum_ligne=max(a,[],2);
a(2,2);
a(5);
supa1=a(:,[1,2]);
supa2=a([2,end],[1,2]);
supa3=a(:,end);
A=det(a);
b=[1,2,3;];
x=b/A

