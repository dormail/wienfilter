# plot.py start
import pandas as pd
import matplotlib.pyplot as plt

dataset = pd.read_csv("wienfilter.csv")
#dataset = pd.read_excel("wienfilter.xlsx")

df = pd.DataFrame(dataset)

print(df)

xt = df['x']
yt = df["y"]

plt.plot(xt, yt)

plt.axis('equal')

plt.show()

# plot.py end
