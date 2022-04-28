function bresenham_line()
clc
clear all
point = input('Give coord[ x0 y0 x1 y1]: ');
if (abs(point(4)-point(2)) > abs(point(3)-point(1)))                                 
    x0 = point(2);y0 = point(1); x1 = point(4);y1=point(3);
    token =1;                                             
else
    x0 = point(1);y0 = point(2); x1 = point(3);y1=point(4);
    token = 0; 
end
if(x0 >x1)
    temp1 = x0; x0 = x1; x1 = temp1;
    temp2 = y0; y0 = y1; y1 = temp2;
end
dx = abs(x1 - x0) ;                              
dy = abs(y1 - y0);                              
sx = sign(x1 - x0);                             
sy = sign(y1 - y0);                             
clf, subplot(2,1,1) ,hold on , grid on ,axis([x0-1 x1+1 y0-1 y1+1]);
title('Bresenham Line Generation Algorithm: Point form')
x = x0; y = y0;                                 
param = 2*dy - dx ;                             
for i = 0:dx-1                               
    x_coord(i+1) = x;                          
    y_coord(i+1) = y;
    if (token ==0)                              
        plot(x,y,'r*');                          
    else                                         
        plot(y,x,'r*');
    end
    param = param + 2*dy;                        
    if (param >0)                              
        y = y +1*sy;                            
        param = param - 2*(dx );                
        
    end
    x = x + 1*sx;                                
end
subplot(2,1,2)                                   
if (token ==0)
    plot(x_coord,y_coord,'r-','LineWidth',2);
else
    plot(y_coord,x_coord,'r-','LineWidth',2);
end
grid on
axis([x0-1 x1+1 y0-1 y1+1]);
title('Bresenham Line Generation Algorithm: Line fragment form')
