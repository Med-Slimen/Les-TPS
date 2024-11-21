x=-5:0.1:5;
y=-5:0.1:5;
[X,Y]=meshgrid(x,y);
Z=sin(sqrt((X.^2)+(Y.^2)));
surf(X,Y,Z)
title("calcule du surface 3D")
xlabel("x-values")
ylabel("y-values")
zlabel("z-values")
colorbar
