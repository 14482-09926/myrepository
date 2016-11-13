figures = input('Please enter my figures in my mind')
a = int(figures)
while a != 11:
    figures = input('Please enter my figuers in my mind')
    a = int(figures)
    if a <= 100:
        print('Your are a worm in my heart?')
    else:
        if a == 10:
            print('No reward')
        else:
            print('Big')
print('Don\'t play game over')
