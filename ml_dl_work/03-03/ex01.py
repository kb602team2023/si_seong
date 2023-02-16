from sklearn.linear_model import LinearRegression
import numpy as np
import matplotlib.pyplot as plt

x=np.array([4,5,6,7])
x=np.column_stack((x**2,x))
y=np.array(x*2+1)*100
y=y[:,1]


print(x)
print(y)

# x=x.reshape(-1,1)

lr=LinearRegression()
lr.fit(x,y)

result=lr.predict([[8**2,8]])
print(result)


plt.scatter(x[:,1],y)
plt.scatter(8,result)

plt.show()