from sklearn.linear_model import LinearRegression
import numpy as np
from sklearn.preprocessing import PolynomialFeatures

x=[[10,20],[30,40],[50,60]]
y=[15,35,55]

# np.set_printoptions(precision=50,suppress=True)
poly=PolynomialFeatures(include_bias=False,degree=5)
x_ploy=poly.fit_transform(x)
print(np.round(x_ploy,2))
lr=LinearRegression()
lr.fit(x_ploy,y)

new=[[25,30]]
new=poly.transform(new)
pred=lr.predict(new)
print(pred)

print(lr.coef_,np.round(lr.intercept_))