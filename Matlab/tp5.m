x=-10:0.1:10;
y1=sin(x);
y2=cos(x);
y3=exp(-0.1*x);

plot(x,y1,'r',"LineWidth",1.5)
hold on
plot(x,y2,'--g',"LineWidth",1)
plot(x,y3,'.b',"LineWidth",2)
ylim([-2 2])
yticks(-2:.2:2)
title('Trasage de x,sin(x) et x,cos(x) et x,exp(-0.1*x')
xlabel('x-values')
ylabel('y-values')
legend('x,y1','x,y2','x,y3','Location','best')
hold off