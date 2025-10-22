# sharpeCalculate

Kullanıcıdan 3 şey alıyor:

Yatırım getirisi (% olarak)

Risksiz faiz oranı (% olarak)

Portföyün standart sapması (% olarak, yani risk)

Bu değerleri oran haline getiriyor:
(/= ile 100’e bölüyor → mesela %15 → 0.15 oluyor)

Formülü uyguluyor:

Sharpe = (Getiri - Risksiz) / StandartSapma

<img width="368" height="105" alt="image" src="https://github.com/user-attachments/assets/2bc7996b-f58b-4f4c-85f0-deea7a81ebbd" />

Böylece risk başına kazancı buluyor.

Sonucu ekrana yazdırıyor
ve Sharpe oranına göre yorum yapıyor:

1’den küçük → düşük

1–2 → iyi

2–3 → çok iyi

3+ → mükemmel
