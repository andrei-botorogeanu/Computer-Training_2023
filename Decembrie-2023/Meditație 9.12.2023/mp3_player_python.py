import tkinter as tk
from tkinter import filedialog
from pygame import mixer
import os

class MusicPlayer:

    def __init__(self, master):
        self.master = master
        self.master.title("Music Player")
        self.master.geometry("400x350")
        mixer.init()
        self.current_song_index = 0
        #vector with playlist
        self.playlist = []

        self.play_button = tk.Button(master, text="Play", command = self.play_music)
        self.play_button.pack(pady=30)

        self.pause_button = tk.Button(master, text="Pause", command = self.pause_music)
        self.pause_button.pack(pady=30)

        self.stop_button = tk.Button(master, text="stop")
        self.stop_button.pack(pady=30)

        self.song_label = tk.Label(master, text = "Song")
        self.song_label.pack()

        #choose song
        self.choose_button = tk.Button(master, text="Choose Song", command=self.choose_file)
        self.choose_button.pack(pady=20)

        self.song_label = tk.Label(master, text="")
        self.song_label.pack(pady=10)

    def play_music(self):
        if self.playlist:
            mixer.music.load(self.playlist[self.current_song_index])
            mixer.music.play()
            self.song_label.config(text=f"music song")
    def pause_music(self):
       mixer.music.pause()
       self.song_label.config(text="Music Paused")

    def choose_file(self):
         file = filedialog.askopenfile(initialdir="/", title = "select file", filetypes=(("MP3 Files","*.mp3"),("all files","*.*")))
         if file:
          self.playlist.append(file)

if _name_ == "__main__":
    root = tk.Tk()
    app = MusicPlayer(root)
    root.mainloop()