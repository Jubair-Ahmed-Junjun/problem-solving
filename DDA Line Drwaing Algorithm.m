x0 = input("Enter x0:");
y0 = input("Enter y0:");
x1 = input("Enter x1:");
y1 = input("Enter y1:");
dx = x1 - x0;
dy = y1 - y0;
if(abs(dx)<abs(dy))
    steps = abs(dx);
else
    steps = abs(dy);
end
xinc = (dx/steps);
yinc = (dy/steps);

x(1) = x0;
y(1) = y0;
for i= 1:steps
    x(i+1) = x(i) + xinc;
    y(i+1) = y(i) + yinc;
end
plot(round(x),round(y),'rs');
grid on,hold on
plot(x,y,'b^');
legend("DDA Points","Actual Points");
xlabel("x");
ylabel("y")
title("DDA Algorithm");
    
    


