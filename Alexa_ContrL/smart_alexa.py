import os 
import playsound
from gtts import gTTS 
import speech_recognition as sr
import webbrowser
import pprint

speech=sr.Recognizer()

while True:
    try:
        with sr.Microphone() as source:
            print("Listening...")
            speech.adjust_for_ambient_noise(source, duration=0.2)
            audio = speech.listen(source)
            text = speech.recognize_google(audio)
            print("berforeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee")
            print(text)
            text = text.lower()  
            print("afterrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr")
            print(text)
            print("You said:", text)
            if "google" in text :
                webbrowser.open("https://www.google.com")
            if "firefox" in text:
                os.system("firefox")
            if "exit" in text:
                print("Exiting program...")
                break

    except sr.RequestError as e:
        print("Could not request results; {0}".format(e))

    except sr.UnknownValueError:
        print("Could not understand audio")

    except KeyboardInterrupt:
        print("Program terminated by user")
        break


tts = gTTS(text='the program is terminated', lang='en', slow=False )
audioF = 'audio.mp3'

a:list=audioF
tts.save(audioF)
print(a)
playsound.playsound(audioF)
print(a)
os.remove(audioF)
        
pprint.pprint(playsound.__dict__)
