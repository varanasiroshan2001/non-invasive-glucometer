# A Non-invasive Glucometer

# Inspiration😎
Whenever we use a diabetes checking machine it always takes blood from our body which may be very less which also gives pain to us and has increased chances of infection (specially for babies and once who are phobic to needles or pain) and also to decrease the medical wastage given by normal glucometers, so we have developed from that inspiration this one so the person will only has to blow the air from his mouth …and that's it the readings of blood sugar levels, diabetes, etc. will come

[Fully Explained Detailed Video](https://youtu.be/RFSj5SM7-rI)

![mq2](https://user-images.githubusercontent.com/64471180/118407882-6b878c00-b6a0-11eb-8ca3-05eabf8b0998.jpg)


# What it does👀
It checks the blood sugar levels, diabetes level just from the blown air of the mouth from acetone level sensing..... If we see the biology behind it, in Pancreas insulin is formed, when the level of insulin is decreased it indicates the symptoms of diabetics. As the result of decrease in insulin it directly effects the fat cells which gets converted into ketone bodies in the liver. This process is known as Ketogenesis. As the result the acetone level in blood cells is increased. So, we can measure the glucose level through acetone present in our breath which will help us detect diabetes without taking out blood.

# How we built it & concept behind it📑🎆🎆
The human breath contains several hundred VOCs with concentrations ranging from part- per-trillion (ppt) to part-per-million (ppm).The human breath contains several hundred VOCs with concentrations ranging from part- per-trillion (ppt) to part-per-million (ppm). The human breath was first analysed by Pauling in 1971 using gas chromatography and around 250 different gases were identified.😲 The acetone concentration in the breath varies from 300 to 900 ppm in healthy people to more than 1800 ppm in individuals with diabetes.

🛑In Pancreas insulin is formed, when the level of insulin is decreased it indicates the symptoms of diabetics. As the result of decrease in insulin it directly effects the fat cells which gets converted into ketone bodies in the liver. This process is known as Ketogenesis. As the result the acetone level in blood cells is increased. So, we can measure the glucose level through acetone present in our breath. 

# Android app 👨‍💻
Along with the hardware, we have made an android application where the user can store his/her daily measured data and can have support. The application has its own server maintained using Google Firebase for password authentication and login related data. Each user can create their own account in the application itself and can check his daily, weekly or monthly reports. The user must enter his glucose level as shown from the device in the application. Health support and good practices can also be seen in the app. We also connected Thingspeak IOT to collect the sensors data efficiently and send it to cloud and update in the app We also used many AWS services to make the flow and latency time lesser

**AWS S3** - AUTO UPLOAD IMAGES TO CLOUD.WHEN THE REPORTS OR ANYTHING WILL BE DONE THE RESULTANT IMAGES WILL BE STORED IN S3    
**AWS DYNAMODB** - FOR KEEPING DATABASES AND WHENEVER THE USER WANTS TO SEE THEM CAN ACCESS IT THROUGH THIS..    
**AWS LAMBDA & FARGATE** - FOR SERVERLESS & SOFT & FAST MANAGEMENT SO THAT WE CAN DEPLOY THIS APP & WEBSITE ALL GLOBALLY WITH NO MANAGING TENSIONS WITH MINIMAL LATENCY   
**AWS API** - TO MAINTAIN BEST API SERVICE TO DEVELOPERS AND GIVE OPTION FOR ALL USERS TO USE API SERVICE AND ALSO WITH OUR WEBSITE TO WORK UPON   

# In the advantages of using this idea or product 🤯: 

Low cost and low power device.   
Small in size and thus making it portable.    
Can be used by anyone.    
Can be used multiple times.    
No or less accessories    
Multipurpose device    
User-friendly    
Comes with an android application for glucose monitoring and controlling    
Regular reminders and measures according to the blood glucose levels    
Few other parameters like body temperature, lungs functionality, health of heart can be determined in parallel.   
Non-contact in nature to avoid any possible corruptions.    

![3](https://user-images.githubusercontent.com/64471180/118408024-421b3000-b6a1-11eb-9978-a0faa9f78078.png)  
![2](https://user-images.githubusercontent.com/64471180/118408026-43e4f380-b6a1-11eb-9503-7156a85250d7.png)  
![1](https://user-images.githubusercontent.com/64471180/118408028-447d8a00-b6a1-11eb-8b47-781674fa300e.png)  
![9](https://user-images.githubusercontent.com/64471180/118408029-45162080-b6a1-11eb-9cb0-921850e2f021.png)  
![8](https://user-images.githubusercontent.com/64471180/118408031-45aeb700-b6a1-11eb-8b02-b2b2365f038a.png)   
![7](https://user-images.githubusercontent.com/64471180/118408032-45aeb700-b6a1-11eb-8710-2f236cf5baf7.png)   
![6](https://user-images.githubusercontent.com/64471180/118408033-46474d80-b6a1-11eb-9a06-6f4354d89b0e.png)   
![5](https://user-images.githubusercontent.com/64471180/118408036-46dfe400-b6a1-11eb-9041-b4514256708a.png)   
![4](https://user-images.githubusercontent.com/64471180/118408039-47787a80-b6a1-11eb-9331-e1b0e97212d3.png)    


# Challenges we ran into🙄
We ran into challenges like data processing data sheets and calculating the reports for user as we are the first ones to built this, so no previous reports were there so those data sheets needed to be calculate properly which we are doing continuously to bring to action also when we were deploying it to aws the dynamodb part of intricating with real time data from app was a bit challenging.

# Accomplishments that we're proud of👍👍🎊🎊🎊
we successfully did a reading on acetone research papers and we realized that, this was a very unique idea which we found out and it may turn out to be a huge startup idea to be built upon with very less amount of cost and harm to people and environment with reduced medical wastage.

# What we learned
we learned many things like the acetone level sensing from mouth and integrating with cloud to deploy it and with using very ordinary things we can solve a huge problem for the world

# What's next for Non-invasive Glucometer🔜🔜
we are deciding to grow it to a startup if possible and help as many people as possible with this kind of market evaluation... adding more health detection systems other than diabetes adding of ML in the project so it will auto analyze the reports and become and give more accurate results next.

Can be used for diagnosis of diabetes(with more convinience)
Can be used to control and maintain the blood sugar level.
Can be used for temperature measurement, lung, functionality, health of heart etc.
Can be used in medical facilities for quick and painless diagnosis
Can be used to contact local/national doctors/specialists
We will be also looking to develop this not only for blood sugar or diabetes but many other diseases like lung cancer, breast cancer, etc.
We will be also looking to use AWS extensively after this to make it good and fast time error efficient reports.
Reduces medical wastage caused by the one time use strips.

# Built With
amazon-web-services   
android-studio    
arduino     
cloud    
esp32   
hardware        
microcontroller   
sensors      
Thingspeak IOT   

# 😘😘💕Give it a star and follow us if u liked my project 🍕👌💖💖💖💖💖
