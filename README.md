# Project_Music_PLayer
## 資工系1B，第23組，組員:謝慕慈(組長)、林威廷、阮越風

### *專題:音樂播放清單管理器*
*使用規則:*

一開始會先出現可以使用的選項功能，而每個選項會有一個專屬的編號，輸入編號來執行你要的功能，進而到下一步，之後她會文字告訴你要輸入甚麼，照著做就可以了。

---
*程式介紹:*

本程式使用 C++ 撰寫，採用物件導向設計，分為 `Song`、`Playlist`、`Player` 三個主要類別，搭配一個控制流程的 `App` 模組。
`Song`:負責儲存歌曲的基本資料。
`Playlist`:負責管理多首歌曲，支援新增、刪除、查詢。
`Player`:負責控制播放，包括切換歌曲、隨機播放、循環播放。
`App`:輸出menu。

功能函式：播放、暫停、下一首、上一首、加歌、刪除歌曲、查詢歌曲、隨機播放。

---
*如何安裝執行:*

點擊綠色的code按鈕，下載zip檔，檔案解壓縮後找到.sln檔，使用visual studio 2022版本打開便可執行，或者直接開檔案裡的執行檔。

---
*運行畫面:*
![image](https://github.com/user-attachments/assets/aed6b83d-4234-4b5c-ad66-3723e4908d1a)
這是一開始的畫面，有執行列表。
![image](https://github.com/user-attachments/assets/c8e2a867-bbe1-49a8-be2c-1f320da7a8b6)
我先執行了1(加歌)，他會告訴你要輸入甚麼。p.s.輸入完歌詞後要再新增一行然後輸入END才會結束
完了後他會再展示執行列表。
![image](https://github.com/user-attachments/assets/1ff1c714-b255-4340-8fd3-28947e048719)
選擇3可以秀出所有歌以及他們的所有資訊
![image](https://github.com/user-attachments/assets/1c9035ff-69d4-4e74-adcb-d131f471a6de)
選4會播放你加入的第一首歌。
![image](https://github.com/user-attachments/assets/faad139d-43b8-497c-901e-1aa2387028f2)
選5是播放下一首。
![image](https://github.com/user-attachments/assets/87c30e06-d8fc-4897-820b-3961778b8278)
選6是播放上一首。
![image](https://github.com/user-attachments/assets/b5ef8752-62e8-49b9-82b4-3f488874ceb8)
選7是打開隨機播放開關。
![image](https://github.com/user-attachments/assets/4562d68b-c755-4c21-a39b-4fd41983eb95)
選2是刪除歌曲。
![image](https://github.com/user-attachments/assets/369ac547-877b-4e85-95c6-eff9f76e60e7)
選0是離開。

---
*分工資訊:*

組長:謝慕慈 → 程式設計+UML+簡報製作+報告

組員:林威廷 → 簡報製作

組員:阮越風 → 報告
