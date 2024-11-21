a=randi([-30,30],3,3);
a;
trace(a);
inv(a);
A=det(a);
minc=min(a);
maxc=max(a);
minligne=min(a,[],2);
maxligne=max(a,[],2);
transpose(a);
sum(a,"all");
prod(a,"all");
mean(a,2);
b=[4,0,3;9,1,-2;4,0,1]
c=b([2,end],[2,end]);
b(1,1)=3;
b(1,2)=1;
b(1,3)=1;
b(3,2)=1;
b(3,3)=0;
b;
f=a*b
x=2;
p=x^3-3*x^4+2*x^3;
disp("la valeur de f = "+p)
xx=-2*pi:0.01:2*pi;
fx=sin(xx);
fy=cos(xx);
hold on
plot(xx,fx,'g','LineStyle','-','LineWidth',3)
plot(xx,fy,'b','LineStyle',':','LineWidth',1)
legend('x,fx','x,fy','Location','best')
title("tracage sin(x) et cos(x) sur -2π et 2π")
xlabel('x-values')
ylabel('y-values')
f=5;
disp("la factoriel de "+f+" est egale a "+factorial(f))