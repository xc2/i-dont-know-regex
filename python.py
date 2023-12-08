import re

str = 'b' * 500000 + 'a'

print(re.match(r'b+$', str))

