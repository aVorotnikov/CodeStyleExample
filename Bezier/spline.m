clear;

matr1 = readmatrix('src.txt');
[w1, h1] = size(matr1);
x1 = transpose(matr1(1:w1, 1));
y1 = transpose(matr1(1:w1, 2));

matr2 = readmatrix('out.txt');
[w2, h2] = size(matr2);
x2 = transpose(matr2(1:w2, 1));
y2 = transpose(matr2(1:w2, 2));

plot(x1, y1, 'k', x2, y2, 'r')
legend("Source", "Bezier spline");
grid on;