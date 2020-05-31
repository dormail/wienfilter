# plot.py start
import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

# importing the variables
dataset = pd.read_csv("variables.csv")
df = pd.DataFrame(dataset)

T = df["T"][0]
dt = df["dt"][0]
B= df["B"][0]
E = df["E"][0]
m = df["m"][0]
q = df["q"][0]

# importing the numerical result
dataset = pd.read_csv("wienfilter.csv")
df = pd.DataFrame(dataset)

print(df)

t = df['t']
xt = df['x']
yt = df['y']
vx = df['vx']
vy = df['vy']

vx0 = df['vx'][0]

# computing the analytical result
omega = q * B / m # zyklotronfrequenz
y_an = -1 / omega * (E / B + vx0) * np.cos(omega * t) + (E / B + vx0) /omega
x_an = 1 / omega * (vx0 - E * m /(q * B)) * np.sin(omega * t) + (E * m)/(q * B) * t

vy_an = (E/B + vx0) * np.sin(omega * t)
vx_an = (vx0 - E * m / (q * B)) * np.cos(omega * t) + E * m / (q * B)


plt.plot(xt,yt)
plt.plot(x_an, y_an)
plt.legend(['numerical result', 'analytical result'])

#plt.axis('equal')
plt.xlim(-7,7)
plt.ylim(-5,5)

plt.show()

# plot.py end
