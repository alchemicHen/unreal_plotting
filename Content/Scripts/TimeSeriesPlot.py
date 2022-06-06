import unreal_engine as ue
# EPixelFormat defines the various pixel formats for a texture/image, we will use RGBA with 8bit per channel
from unreal_engine.enums import EPixelFormat

import os
import matplotlib
import matplotlib.pyplot as plt
import pandas as pd


#Prevents plt.show() from working but needed for unreal
matplotlib.use('Agg')

#Setting figure dimensions
width = 1024
height = 1024
dpi = 72.0

plt.clf()
fig = plt.figure(1)
fig.set_dpi(dpi)
fig.set_figwidth(width/dpi)
fig.set_figheight(height/dpi)

os.chdir('C:\\Unreal Projects\\Plotting\\Content\\Scripts')
file = 'SimOut_TCS.csv'
data_df = pd.read_csv(file)

def setPlotData():

    os.chdir('C:\\Unreal Projects\\Plotting\\Content\\Scripts')
    file = 'SimOut_TCS.csv'
    data_df = pd.read_csv(file)

    font = {'family' : 'normal',
    'weight' : 'bold',
    'size'   : 22}

    matplotlib.rc('font', **font)
    plt.xlabel('SimStep', fontsize=20)
    plt.ylabel('Concentration', fontsize=20)
    plt.title('Simulation Plot', fontsize=20)

    L = data_df['L']
    R = data_df['R']
    RL = data_df['RL']
    P = data_df['P']
    pP = data_df['pP']

    plt.plot(L, label = 'L', marker = 'o')
    plt.plot(R, label = 'R', marker = 'o')
    plt.plot(RL, label = 'RL', marker = 'o')
    plt.plot(P, label = 'P', marker = 'o')
    plt.plot(pP, label = 'pP', marker = 'o')

    plt.legend()

setPlotData()

fig.canvas.draw()
#plt.show()

# create a texture in memory (will be saved later)
texture = ue.create_transient_texture(width, height, EPixelFormat.PF_R8G8B8A8)
# copy pixels from matplotlib canvas to the texture as RGBA
texture.texture_set_data(fig.canvas.buffer_rgba())

# save the texture
texture.save_package('/Game/Plotting')

# open its editor
ue.open_editor_for_asset(texture)