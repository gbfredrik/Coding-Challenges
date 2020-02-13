number = 100000
x = runif(number)
y = runif(number)
z = sqrt(x^2+y^2)
montepi = length(which(z <= 1)) * 4 / number

plot(x[which(z <= 1)], y[which(z <= 1)], xlab = "X", ylab = "Y", main = "Monte Carlo Pi", col = 'blue', type = "p", asp = 1)
points(x[which(z > 1)],y[which(z > 1)], col='green')

montepi