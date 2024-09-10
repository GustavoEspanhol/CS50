import qrcode

img = qrcode.make("https://youtu.br/xvFZjo5PgG0")
img.save("qr.png", "PNG")
