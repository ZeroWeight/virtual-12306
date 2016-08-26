# virtual-12306
## Client

### Start Window
- query
  - des,src,date
- Login/Register

### MODULE Query
- login/register
- query
- detail 
   - dates
   - train type
   - clear all<br>
   
   
|Train id|DES|SRC|Depart time|Arrival time|Duration|Seat LEV1|...|Remark|
|----|----|----|----|----|----|----|----|----|
|___K5032___| | | | | | ___Ticket Remain___|...|`Buy`|
|Route| | | | | |Price|...|
- if time remains less than 30 min
disable `buy`
- About us
- CopyRight
- GoTo top

### MODULE Buy
- if not login
  - Login
- fill the info
  - person add(from contact book)(check box)
  - max check 5
  - Ticket type
- Captcha
   if succeed<br>
      - if has anyone bought twice
      error message<br>
      back<br>

      - confirm info<br>
      - choose seat<br>
      - button pay;button cancel<br>
      -   if cancel <br>
           go back<br>
      -   if pay<br>
          go to pay module<br>
- Cancel
back<br>

### MODULE Login/Register/(OR Update/Register) 
- if Register
  - fill info
  - bind account
- if Login
  - input username password
if Update
  - Update Password
  - Update TEL
  - Recharge virtual account
  
### MODULE Pay
- receive a amount
- if local pay able<br>
local pay
- else <br>
  - recharge account
  - choose the payment
    - enter the card id
    - enter the card password
    - confirm
    - _always_ _succeed_

### SU Login Module
- password
- id


### SU
#### query the train ID
- add a train
- del a train
- modify the train info
  - time
  - amount
  - add a station
  - del a station

|Train id|`Amount Seat`|`Amount Lobby`|
|----|----|----|
|station|ARR time|DEP time|
|`beijing`|`7:00`|`7:05`|

- if click bj
  - del the station
  - add a station before
  - add a station behind

#### query the Station id
- almost the same as query

## Database
- USE SQLITE as the database
- db TRAIN
  - for each train
  add a table<br>
 
|Rank KEY|PointTo|PointFrom|Station|Bitmap1|Bitmap2|Bitmap3|Bitmap4|Bitmap5|Bitmap6|Bitmap7|Bitmap8|Bitmap9|Bitmap10|
|----|----|----|----|-----|----|----|----|----|----|----|----|----|----|----|

- db MESSAGE
- table STATION_INFO

|Station KEY|Train1|Train2|Train3|Train4|Train5|Train6|Train7|Train8|Train9|Train10|Train11|Train12|
|----|----|----|----|-----|----|----|----|----|----|----|----|----|

- table PASSENGER_INFO

|name|ID Card SHA KEY|Tel|TYPE|SEX|Univ.|Code_Stu|Grade|Interval1|Interval2|
|----|----|----|----|---|----|----|----|----|----|

- table USER

|USER NAME KEY|Password SHA|Authority|Virtual account|Contact NUM|Contact ID 1|Contact ID 2|Contact ID 3|Contact ID 4|Contact ID 5|Contact ID 6|
|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|----|

## Communicate TCP/IP
### Login
### Register
### Query
### Passenger Update
#### Update Password
#### Update Contact
#### Update TEL
### buy
### pay
### add a train
### del a train
### modify train info
#### del the station
#### add a station before
#### add a station behind
## Interface
