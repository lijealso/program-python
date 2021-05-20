name = 'python'

def func():
    name = 'codehub.py'
    def hello():
        print("hello",name)
    hello()
    
func()
print("hello", name )


# OUTPUT?
# 1 - hello python
# 2 - hello codehub.py
# 3 - hello codehub.py
#     hello python
