from datetime import datetime

date_str = "2022-03-17 10:45:30"
date_ob = datetime.strptime(date_str, '%Y-%m-%d %H:%M:%S')
# Uses variable name that doesn't exist 
formatted_date = date_obj.strftime('%m/%d/%Y %H:%M:%S')

print(formatted_date)
