-- phpMyAdmin SQL Dump
-- version 5.0.4
-- https://www.phpmyadmin.net/
--
-- Anamakine: 127.0.0.1
-- Üretim Zamanı: 22 Ara 2020, 00:19:18
-- Sunucu sürümü: 10.4.16-MariaDB
-- PHP Sürümü: 7.4.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Veritabanı: `ztechsystembuilder`
--

-- --------------------------------------------------------

--
-- Tablo için tablo yapısı `chipset`
--

CREATE TABLE `chipset` (
  `id` int(11) NOT NULL,
  `name` varchar(15) NOT NULL,
  `socket` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Tablo döküm verisi `chipset`
--

INSERT INTO `chipset` (`id`, `name`, `socket`) VALUES
(1, 'A320', 1),
(2, 'B450', 1),
(3, 'B550', 1),
(4, 'TRX40', 2),
(5, 'X470', 1),
(6, 'X540', 1);

-- --------------------------------------------------------

--
-- Tablo için tablo yapısı `cpu`
--

CREATE TABLE `cpu` (
  `id` int(11) NOT NULL,
  `brand` varchar(15) NOT NULL,
  `model` varchar(30) NOT NULL,
  `socket` int(11) NOT NULL,
  `frequency` float NOT NULL,
  `turbo_frequency` float NOT NULL,
  `cores` int(11) NOT NULL,
  `threads` int(11) NOT NULL,
  `cache` int(11) NOT NULL,
  `tdp` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Tablo döküm verisi `cpu`
--

INSERT INTO `cpu` (`id`, `brand`, `model`, `socket`, `frequency`, `turbo_frequency`, `cores`, `threads`, `cache`, `tdp`) VALUES
(1, 'AMD', 'Ryzen 3 3100', 1, 3.6, 3.9, 4, 8, 18, 65),
(2, 'AMD', 'Ryzen 3 3300X', 1, 3.8, 4.3, 4, 8, 18, 65),
(3, 'AMD', 'Ryzen 5 3600', 1, 3.6, 4.2, 6, 12, 35, 65),
(4, 'AMD', 'Ryzen 5 3600X', 1, 3.8, 4.4, 6, 12, 35, 95),
(5, 'AMD', 'Ryzen 7 3700X', 1, 3.6, 4.4, 8, 16, 36, 65),
(6, 'AMD', 'Ryzen 7 3800X', 1, 3.9, 4.5, 8, 16, 36, 105),
(7, 'AMD', 'Ryzen 9 3900X', 1, 3.8, 4.6, 12, 24, 70, 105),
(8, 'AMD', 'Ryzen 9 3950X', 1, 3.5, 4.7, 16, 32, 72, 105),
(9, 'AMD', 'Threadripper 1900X', 2, 3.8, 4, 8, 16, 20, 180),
(10, 'AMD', 'Threadripper 2970WX', 2, 3, 4.2, 24, 48, 76, 250),
(11, 'AMD', 'Threadripper 3960X', 2, 3.8, 4.5, 24, 48, 140, 280),
(12, 'AMD', 'Threadripper 3990X', 2, 2.9, 4.3, 64, 128, 256, 280);

-- --------------------------------------------------------

--
-- Tablo için tablo yapısı `cpu_cooling`
--

CREATE TABLE `cpu_cooling` (
  `id` int(11) NOT NULL,
  `brand` varchar(15) NOT NULL,
  `model` varchar(30) NOT NULL,
  `socket` int(11) NOT NULL,
  `type` int(11) NOT NULL,
  `fan_size` int(11) NOT NULL,
  `fan_speed` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Tablo döküm verisi `cpu_cooling`
--

INSERT INTO `cpu_cooling` (`id`, `brand`, `model`, `socket`, `type`, `fan_size`, `fan_speed`) VALUES
(1, 'Cooler Master', 'A71C', 1, 1, 120, 1800),
(2, 'Akasa', 'Vegas Chroma', 1, 1, 120, 1800),
(3, 'Arctic', 'Freezer 34 eSports', 1, 2, 120, 2100),
(4, 'Cooler Master', 'Hyper 212 Black Edition', 1, 2, 120, 2000),
(5, 'Dark', 'AquaForce W126', 1, 3, 120, 2000),
(6, 'Arctic', 'Liquid Freezer II', 1, 3, 240, 1800),
(7, 'Arctic', 'Freezer 50 TR', 2, 2, 120, 1800);

-- --------------------------------------------------------

--
-- Tablo için tablo yapısı `cpu_cooling_type`
--

CREATE TABLE `cpu_cooling_type` (
  `id` int(11) NOT NULL,
  `name` varchar(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Tablo döküm verisi `cpu_cooling_type`
--

INSERT INTO `cpu_cooling_type` (`id`, `name`) VALUES
(1, 'Air'),
(2, 'Tower'),
(3, 'Liquid');

-- --------------------------------------------------------

--
-- Tablo için tablo yapısı `graphic_card`
--

CREATE TABLE `graphic_card` (
  `id` int(11) NOT NULL,
  `brand` varchar(15) NOT NULL,
  `model` varchar(30) NOT NULL,
  `memory` int(11) NOT NULL,
  `memory_type` int(11) NOT NULL,
  `gpu_speed` int(11) NOT NULL,
  `tdp` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Tablo döküm verisi `graphic_card`
--

INSERT INTO `graphic_card` (`id`, `brand`, `model`, `memory`, `memory_type`, `gpu_speed`, `tdp`) VALUES
(1, 'Gigabyte', 'AMD Radeon RX Vega 64', 8, 2, 1873, 295),
(2, 'MSI', 'NVIDIA GTX 1070 Ti ARMOR', 8, 2, 1607, 180),
(3, 'Asus', 'EX-GTX1060-O6G', 6, 2, 1594, 120),
(4, 'Asus', 'TURBO-GTX1080-8G', 8, 3, 1607, 180),
(5, 'Asus', 'STRIX-GTX1080-8G', 8, 3, 1632, 165),
(6, 'Gigabyte', 'AORUS RTX2080 Ti', 11, 4, 1545, 250),
(7, 'MSI', 'RTX 2080 Ti GAMING X TRIO', 11, 4, 1350, 250),
(8, 'Asus', 'STRIX-RTX2080-08G', 8, 4, 1518, 250),
(9, 'Asus', 'ROG-STRIX-RTX 3090-O24G', 24, 5, 1695, 350),
(10, 'MSI', 'RTX-3090-VENTUS-3X-24G-OC', 24, 5, 1400, 350);

-- --------------------------------------------------------

--
-- Tablo için tablo yapısı `memory`
--

CREATE TABLE `memory` (
  `id` int(11) NOT NULL,
  `brand` varchar(15) NOT NULL,
  `model` varchar(30) NOT NULL,
  `memory_type` int(11) NOT NULL,
  `memory` int(11) NOT NULL,
  `speed` int(11) NOT NULL,
  `module_type` int(11) NOT NULL,
  `cas_latency` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Tablo döküm verisi `memory`
--

INSERT INTO `memory` (`id`, `brand`, `model`, `memory_type`, `memory`, `speed`, `module_type`, `cas_latency`) VALUES
(1, 'Corsair ', '', 1, 256, 3200, 8, 16),
(2, 'Corsair ', '', 1, 128, 4000, 4, 18),
(3, 'Corsair ', 'Dominator Platinium Black', 1, 128, 4000, 2, 19),
(4, 'Corsair ', '', 1, 32, 3000, 1, 19),
(5, 'Adata ', 'XPG Spectrix D41', 1, 8, 3600, 1, 17),
(6, 'Adata ', 'XPG Spectrix D60G', 1, 16, 4133, 2, 19);

-- --------------------------------------------------------

--
-- Tablo için tablo yapısı `memory_type`
--

CREATE TABLE `memory_type` (
  `id` int(11) NOT NULL,
  `name` varchar(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Tablo döküm verisi `memory_type`
--

INSERT INTO `memory_type` (`id`, `name`) VALUES
(1, 'DDR4'),
(2, 'GDDR5'),
(3, 'GDDR5X'),
(4, 'GDDR6'),
(5, 'GDDR6X');

-- --------------------------------------------------------

--
-- Tablo için tablo yapısı `motherboard`
--

CREATE TABLE `motherboard` (
  `id` int(11) NOT NULL,
  `brand` varchar(15) NOT NULL,
  `model` varchar(30) NOT NULL,
  `chipset` int(11) NOT NULL,
  `socket` int(11) NOT NULL,
  `size` int(11) NOT NULL,
  `memory_type` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Tablo döküm verisi `motherboard`
--

INSERT INTO `motherboard` (`id`, `brand`, `model`, `chipset`, `socket`, `size`, `memory_type`) VALUES
(1, 'Gigabyte', 'A320M-DS2', 1, 1, 2, 1),
(2, 'Asus', 'Prime A320M-A', 1, 1, 2, 1),
(3, 'MSI', 'A320M-A Pro Max', 1, 1, 2, 1),
(4, 'Asus', 'ROG Strix B450-E', 2, 1, 1, 1),
(5, 'Gigabyte', 'B450 I AORUS PRO WIFI', 2, 1, 1, 1),
(6, 'MSI', 'B450I', 2, 1, 1, 1),
(7, 'Gigabyte', 'B550 Vision D', 3, 1, 1, 1),
(8, 'Asus', 'ROG Strix B550-E', 3, 1, 1, 1),
(9, 'MSI', 'MPG AMD B550', 3, 1, 1, 1),
(10, 'Asus', 'ROG Zenith II Extreme Alpha', 4, 2, 1, 1),
(11, 'Gigabyte', 'TRX40 Designare', 4, 2, 1, 1),
(12, 'MSI', 'Creator TRX40', 4, 2, 1, 1),
(13, 'Asus', 'ROG Crosshair VII Hero', 5, 1, 1, 1),
(14, 'MSI', 'X470 Gaming PRO CARBON', 5, 1, 1, 1),
(15, 'Asus', 'ROG CROSSHAIR VIII FORMULA', 6, 1, 1, 1),
(16, 'Gigabyte', 'X570 AORUS MASTER', 6, 1, 1, 1),
(17, 'Asus', 'ROG Strix B550-I', 3, 1, 3, 1);

-- --------------------------------------------------------

--
-- Tablo için tablo yapısı `motherboard_size`
--

CREATE TABLE `motherboard_size` (
  `id` int(11) NOT NULL,
  `name` varchar(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Tablo döküm verisi `motherboard_size`
--

INSERT INTO `motherboard_size` (`id`, `name`) VALUES
(1, 'ATX'),
(2, 'Micro-ATX'),
(3, 'Mini-ITX');

-- --------------------------------------------------------

--
-- Tablo için tablo yapısı `pc_case`
--

CREATE TABLE `pc_case` (
  `id` int(11) NOT NULL,
  `brand` varchar(15) NOT NULL,
  `model` varchar(30) NOT NULL,
  `motherboard_size` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Tablo döküm verisi `pc_case`
--

INSERT INTO `pc_case` (`id`, `brand`, `model`, `motherboard_size`) VALUES
(1, 'MSI', 'MAG Forge 100M', 1),
(2, 'Everest', 'X-Mesh 4', 1),
(3, 'Corsair', 'iCUE 465X', 1),
(4, 'NZXT', 'CA-S340W-B5', 2),
(5, 'Rampage', 'TITAN PLUS', 2),
(6, 'Dark', 'DKCHXForce', 3),
(7, 'Aerocool', 'AE-QS240-BG', 3);

-- --------------------------------------------------------

--
-- Tablo için tablo yapısı `power_supply`
--

CREATE TABLE `power_supply` (
  `id` int(11) NOT NULL,
  `brand` varchar(15) NOT NULL,
  `model` varchar(30) NOT NULL,
  `wattage` int(11) NOT NULL,
  `type` int(11) NOT NULL,
  `certificate` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Tablo döküm verisi `power_supply`
--

INSERT INTO `power_supply` (`id`, `brand`, `model`, `wattage`, `type`, `certificate`) VALUES
(1, 'Cooler Master', 'Elite V4', 600, 3, 1),
(2, 'Dark', 'Force', 500, 3, 1),
(3, 'Seasonic', 'M12II-620', 620, 1, 2),
(4, 'Frisby', 'Gamemax', 1050, 1, 3),
(5, 'Thermaltake', 'Toughpower GF1', 750, 1, 4),
(6, 'Corsair', 'AX1200i', 1200, 1, 5),
(7, 'Power Boost', 'Glacier', 750, 2, 2),
(8, 'Corsair', 'Vengeance Series 750M', 750, 2, 3),
(9, 'Sharkonn', 'WPM Gold Zero', 750, 2, 4),
(10, 'Power Boost', 'Rage Serisi', 1200, 2, 5),
(11, 'High Power', 'HPE-700BR-A12S', 700, 3, 2),
(12, 'FSP', 'Raider II RA2-750', 750, 3, 3),
(13, 'High Power', 'Performance GD', 800, 3, 4);

-- --------------------------------------------------------

--
-- Tablo için tablo yapısı `psu_certificate`
--

CREATE TABLE `psu_certificate` (
  `id` int(11) NOT NULL,
  `name` varchar(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Tablo döküm verisi `psu_certificate`
--

INSERT INTO `psu_certificate` (`id`, `name`) VALUES
(1, '80+'),
(2, '80+ Bronze'),
(3, '80+ Silver'),
(4, '80+ Gold'),
(5, '80+ Platinum');

-- --------------------------------------------------------

--
-- Tablo için tablo yapısı `psu_type`
--

CREATE TABLE `psu_type` (
  `id` int(11) NOT NULL,
  `name` varchar(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Tablo döküm verisi `psu_type`
--

INSERT INTO `psu_type` (`id`, `name`) VALUES
(1, 'Modular'),
(2, 'Semi-Modular'),
(3, 'Non-Modular');

-- --------------------------------------------------------

--
-- Tablo için tablo yapısı `socket`
--

CREATE TABLE `socket` (
  `id` int(11) NOT NULL,
  `name` varchar(5) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Tablo döküm verisi `socket`
--

INSERT INTO `socket` (`id`, `name`) VALUES
(1, 'AM4'),
(2, 'TR4');

-- --------------------------------------------------------

--
-- Tablo için tablo yapısı `storage`
--

CREATE TABLE `storage` (
  `id` int(11) NOT NULL,
  `brand` varchar(15) NOT NULL,
  `model` varchar(30) NOT NULL,
  `storage_type` int(11) NOT NULL,
  `capacity` int(11) NOT NULL,
  `read_speed` int(11) NOT NULL,
  `write_speed` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Tablo döküm verisi `storage`
--

INSERT INTO `storage` (`id`, `brand`, `model`, `storage_type`, `capacity`, `read_speed`, `write_speed`) VALUES
(1, 'WD', 'WD10EZEX', 1, 1024, 140, 160),
(2, 'Seagate', 'ST1000DM010', 1, 1024, 140, 160),
(3, 'Adata', 'SU650', 2, 120, 520, 450),
(4, 'Kingston', 'SA400S37/120G', 2, 120, 500, 320),
(5, 'SanDisk', 'SDSSDA-120G-G27', 2, 120, 530, 310),
(6, 'Samsung', 'MZ-N6E500BW', 3, 500, 550, 520),
(7, 'Kingston', 'SA400M8/240G', 3, 240, 500, 350),
(8, 'Samsung', 'MZ-V7S1T0BW', 4, 1024, 3500, 3300),
(9, 'Adata', 'AS40G-1TT-C', 4, 1024, 3500, 1900);

-- --------------------------------------------------------

--
-- Tablo için tablo yapısı `storage_type`
--

CREATE TABLE `storage_type` (
  `id` int(11) NOT NULL,
  `name` varchar(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Tablo döküm verisi `storage_type`
--

INSERT INTO `storage_type` (`id`, `name`) VALUES
(1, 'SATA HDD'),
(2, 'SATA SSD'),
(3, 'M.2 SDD'),
(4, 'M.2 NVMe SSD');

--
-- Dökümü yapılmış tablolar için indeksler
--

--
-- Tablo için indeksler `chipset`
--
ALTER TABLE `chipset`
  ADD PRIMARY KEY (`id`);

--
-- Tablo için indeksler `cpu`
--
ALTER TABLE `cpu`
  ADD PRIMARY KEY (`id`);

--
-- Tablo için indeksler `cpu_cooling`
--
ALTER TABLE `cpu_cooling`
  ADD PRIMARY KEY (`id`);

--
-- Tablo için indeksler `cpu_cooling_type`
--
ALTER TABLE `cpu_cooling_type`
  ADD PRIMARY KEY (`id`);

--
-- Tablo için indeksler `graphic_card`
--
ALTER TABLE `graphic_card`
  ADD PRIMARY KEY (`id`);

--
-- Tablo için indeksler `memory`
--
ALTER TABLE `memory`
  ADD PRIMARY KEY (`id`);

--
-- Tablo için indeksler `memory_type`
--
ALTER TABLE `memory_type`
  ADD PRIMARY KEY (`id`);

--
-- Tablo için indeksler `motherboard`
--
ALTER TABLE `motherboard`
  ADD PRIMARY KEY (`id`);

--
-- Tablo için indeksler `motherboard_size`
--
ALTER TABLE `motherboard_size`
  ADD PRIMARY KEY (`id`);

--
-- Tablo için indeksler `pc_case`
--
ALTER TABLE `pc_case`
  ADD PRIMARY KEY (`id`);

--
-- Tablo için indeksler `power_supply`
--
ALTER TABLE `power_supply`
  ADD PRIMARY KEY (`id`);

--
-- Tablo için indeksler `psu_certificate`
--
ALTER TABLE `psu_certificate`
  ADD PRIMARY KEY (`id`);

--
-- Tablo için indeksler `psu_type`
--
ALTER TABLE `psu_type`
  ADD PRIMARY KEY (`id`);

--
-- Tablo için indeksler `socket`
--
ALTER TABLE `socket`
  ADD PRIMARY KEY (`id`);

--
-- Tablo için indeksler `storage`
--
ALTER TABLE `storage`
  ADD PRIMARY KEY (`id`);

--
-- Tablo için indeksler `storage_type`
--
ALTER TABLE `storage_type`
  ADD PRIMARY KEY (`id`);

--
-- Dökümü yapılmış tablolar için AUTO_INCREMENT değeri
--

--
-- Tablo için AUTO_INCREMENT değeri `chipset`
--
ALTER TABLE `chipset`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7;

--
-- Tablo için AUTO_INCREMENT değeri `cpu`
--
ALTER TABLE `cpu`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=13;

--
-- Tablo için AUTO_INCREMENT değeri `cpu_cooling`
--
ALTER TABLE `cpu_cooling`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;

--
-- Tablo için AUTO_INCREMENT değeri `cpu_cooling_type`
--
ALTER TABLE `cpu_cooling_type`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- Tablo için AUTO_INCREMENT değeri `graphic_card`
--
ALTER TABLE `graphic_card`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;

--
-- Tablo için AUTO_INCREMENT değeri `memory`
--
ALTER TABLE `memory`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7;

--
-- Tablo için AUTO_INCREMENT değeri `memory_type`
--
ALTER TABLE `memory_type`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;

--
-- Tablo için AUTO_INCREMENT değeri `motherboard`
--
ALTER TABLE `motherboard`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=18;

--
-- Tablo için AUTO_INCREMENT değeri `motherboard_size`
--
ALTER TABLE `motherboard_size`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- Tablo için AUTO_INCREMENT değeri `pc_case`
--
ALTER TABLE `pc_case`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;

--
-- Tablo için AUTO_INCREMENT değeri `power_supply`
--
ALTER TABLE `power_supply`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=14;

--
-- Tablo için AUTO_INCREMENT değeri `psu_certificate`
--
ALTER TABLE `psu_certificate`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;

--
-- Tablo için AUTO_INCREMENT değeri `psu_type`
--
ALTER TABLE `psu_type`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- Tablo için AUTO_INCREMENT değeri `socket`
--
ALTER TABLE `socket`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- Tablo için AUTO_INCREMENT değeri `storage`
--
ALTER TABLE `storage`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=10;

--
-- Tablo için AUTO_INCREMENT değeri `storage_type`
--
ALTER TABLE `storage_type`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
