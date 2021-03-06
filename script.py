import subprocess
import time
from datetime import date

#adding the changes
process = subprocess.Popen(["git", "add", "."], stdout=subprocess.PIPE)
output = process.communicate()[0]
print("Changes added...")

# committing the changes
today = date.today().strftime("%B %d")
process = subprocess.Popen(["git", "commit", "-m", today], stdout=subprocess.PIPE)
output = process.communicate()[0]
print("Committed the changes...")   

# push the committed changes
process = subprocess.Popen(["git", "push"], stdout=subprocess.PIPE)
output = process.communicate()[0]
 