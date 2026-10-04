<!DOCTYPE html>
<html lang="vi">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>HyperCar Vault | Lamborghini & Ferrari</title>
    <style>
        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
        }

        body {
            background-color: #0b0b0b;
            color: #ffffff;
            overflow-x: hidden;
        }

        /* Header Navigation */
        header {
            display: flex;
            justify-content: space-between;
            align-items: center;
            padding: 20px 8%;
            background: rgba(0, 0, 0, 0.85);
            backdrop-filter: blur(10px);
            position: fixed;
            width: 100%;
            top: 0;
            z-index: 1000;
            border-bottom: 1px solid #222;
        }

        .logo {
            font-size: 24px;
            font-weight: 900;
            letter-spacing: 2px;
            background: linear-gradient(45deg, #ff1801, #ffcc00);
            -webkit-background-clip: text;
            -webkit-text-fill-color: transparent;
        }

        nav a {
            color: #ccc;
            text-decoration: none;
            margin-left: 30px;
            font-size: 14px;
            text-transform: uppercase;
            letter-spacing: 1px;
            transition: 0.3s;
        }

        nav a:hover {
            color: #fff;
        }

        /* Hero Section */
        .hero {
            height: 100vh;
            display: flex;
            flex-direction: column;
            justify-content: center;
            align-items: center;
            text-align: center;
            background: radial-gradient(circle, rgba(25,25,25,1) 0%, rgba(5,5,5,1) 100%);
            padding: 0 20px;
        }

        .hero h1 {
            font-size: 60px;
            font-weight: 800;
            margin-bottom: 15px;
            letter-spacing: 3px;
        }

        .hero p {
            color: #888;
            font-size: 18px;
            max-width: 600px;
            margin-bottom: 30px;
        }

        /* Brand Cards Section */
        .brands-container {
            display: grid;
            grid-template-columns: repeat(auto-fit, minmax(350px, 1fr));
            gap: 40px;
            padding: 100px 8%;
        }

        .card {
            background: #141414;
            border-radius: 12px;
            overflow: hidden;
            position: relative;
            transition: transform 0.4s ease, box-shadow 0.4s ease;
            border: 1px solid #222;
        }

        /* Lamborghini Styling */
        .card.lambo {
            border-top: 4px solid #ffcc00;
        }
        .card.lambo:hover {
            transform: translateY(-10px);
            box-shadow: 0 10px 30px rgba(255, 204, 0, 0.2);
        }

        /* Ferrari Styling */
        .card.ferrari {
border-top: 4px solid #ff1801;
        }
        .card.ferrari:hover {
            transform: translateY(-10px);
            box-shadow: 0 10px 30px rgba(255, 24, 1, 0.25);
        }

        .card-img {
            width: 100%;
            height: 240px;
            background-size: cover;
            background-position: center;
        }

        .lambo-img {
            background-image: url('https://images.unsplash.com/photo-1544829099-b9a0c07fad1a?q=80&w=1000');
        }

        .ferrari-img {
            background-image: url('https://images.unsplash.com/photo-1583121274602-3e2820c69888?q=80&w=1000');
        }

        .card-body {
            padding: 30px;
        }

        .card-body h3 {
            font-size: 26px;
            margin-bottom: 10px;
        }

        .card-body p {
            color: #aaa;
            font-size: 14px;
            line-height: 1.6;
            margin-bottom: 20px;
        }

        .btn {
            display: inline-block;
            padding: 12px 28px;
            border-radius: 4px;
            font-weight: bold;
            text-transform: uppercase;
            font-size: 12px;
            letter-spacing: 1px;
            text-decoration: none;
            transition: 0.3s;
        }

        .btn-lambo {
            background: #ffcc00;
            color: #000;
        }
        .btn-lambo:hover {
            background: #ffe066;
        }

        .btn-ferrari {
            background: #ff1801;
            color: #fff;
        }
        .btn-ferrari:hover {
            background: #ff4733;
        }

        /* Footer */
        footer {
            text-align: center;
            padding: 40px;
            color: #555;
            border-top: 1px solid #1a1a1a;
            font-size: 13px;
        }
    </style>
</head>
<body>

    <header>
        <div class="logo">HYPERCAR VAULT</div>
        <nav>
            <a href="#home">Trang chủ</a>
            <a href="#brands">Thương hiệu</a>
            <a href="#contact">Liên hệ</a>
        </nav>
    </header>

    <section class="hero" id="home">
        <h1>ĐỈNH CAO TỐC ĐỘ</h1>
        <p>Khám phá bộ sưu tập những siêu xe huyền thoại đỉnh cao thế giới từ Lamborghini và Ferrari.</p>
    </section>

    <section class="brands-container" id="brands">
        <!-- Lamborghini Card -->
        <div class="card lambo">
            <div class="card-img lambo-img"></div>
            <div class="card-body">
                <h3>LAMBORGHINI</h3>
                <p>Biểu tượng của sự phá cách, góc cạnh và sức mạnh tuyệt đối. Những cỗ máy V12 gầm rú đại diện cho tinh thần quật cường từ Ý.</p>
                <a href="#" class="btn btn-lambo">Khám phá Aventador</a>
            </div>
        </div>

        <!-- Ferrari Card -->
        <div class="card ferrari">
            <div class="card-img ferrari-img"></div>
            <div class="card-body">
<h3>FERRARI</h3>
                <p>Nghệ thuật tốc độ đỉnh cao, di sản của giải đua Formula 1. Sự kết hợp hoàn hảo giữa thiết kế thanh lịch và trái tim siêu mãnh lực.</p>
                <a href="#" class="btn btn-ferrari">Khám phá SF90</a>
            </div>
        </div>
    </section>

    <footer>
        <p>C++ Web Server Powered By Crow | Designed for Speed Enthusiasts</p>
    </footer>

</body>
</html>
