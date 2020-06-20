-- MySQL dump 10.13  Distrib 8.0.19, for Win64 (x86_64)
--
-- Host: localhost    Database: database1
-- ------------------------------------------------------
-- Server version	8.0.19

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `brand_inf`
--

DROP TABLE IF EXISTS `brand_inf`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `brand_inf` (
  `brand_id` char(30) NOT NULL,
  `brand_name` char(30) NOT NULL,
  PRIMARY KEY (`brand_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `brand_inf`
--

LOCK TABLES `brand_inf` WRITE;
/*!40000 ALTER TABLE `brand_inf` DISABLE KEYS */;
/*!40000 ALTER TABLE `brand_inf` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `customer_addr`
--

DROP TABLE IF EXISTS `customer_addr`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `customer_addr` (
  `customer_addr_id` char(30) NOT NULL,
  `customer_id` char(30) NOT NULL,
  `province` char(10) NOT NULL,
  `city` char(10) NOT NULL,
  `address` char(50) NOT NULL,
  `is_default` tinyint(1) DEFAULT NULL,
  PRIMARY KEY (`customer_addr_id`),
  KEY `customer_id` (`customer_id`),
  CONSTRAINT `customer_addr_ibfk_1` FOREIGN KEY (`customer_id`) REFERENCES `login` (`customer_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `customer_addr`
--

LOCK TABLES `customer_addr` WRITE;
/*!40000 ALTER TABLE `customer_addr` DISABLE KEYS */;
/*!40000 ALTER TABLE `customer_addr` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `customer_inf`
--

DROP TABLE IF EXISTS `customer_inf`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `customer_inf` (
  `customer_id` char(30) NOT NULL,
  `customer_name` char(15) NOT NULL,
  `indentity_card` int NOT NULL,
  `indentity_number` char(20) NOT NULL,
  `phone` int NOT NULL,
  `email` char(50) NOT NULL,
  `gender` int NOT NULL,
  `regist_time` char(20) DEFAULT NULL,
  `total_cost` int DEFAULT NULL,
  `customer_level` int NOT NULL,
  `point` int NOT NULL,
  `payment_method` char(50) NOT NULL,
  `payment_account` char(50) NOT NULL,
  `is_merchant` tinyint(1) NOT NULL,
  `question` char(250) DEFAULT NULL,
  PRIMARY KEY (`customer_id`),
  UNIQUE KEY `customer_id` (`customer_id`,`customer_name`),
  UNIQUE KEY `indentity_number` (`indentity_number`,`phone`,`email`),
  CONSTRAINT `customer_inf_ibfk_1` FOREIGN KEY (`customer_id`) REFERENCES `login` (`customer_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `customer_inf`
--

LOCK TABLES `customer_inf` WRITE;
/*!40000 ALTER TABLE `customer_inf` DISABLE KEYS */;
/*!40000 ALTER TABLE `customer_inf` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `favourites`
--

DROP TABLE IF EXISTS `favourites`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `favourites` (
  `favourites_id` char(30) NOT NULL,
  `customer_id` char(20) NOT NULL,
  `product_id` char(20) NOT NULL,
  `add_time` char(20) DEFAULT NULL,
  PRIMARY KEY (`favourites_id`),
  KEY `product_id` (`product_id`),
  CONSTRAINT `favourites_ibfk_1` FOREIGN KEY (`product_id`) REFERENCES `product_inf` (`product_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `favourites`
--

LOCK TABLES `favourites` WRITE;
/*!40000 ALTER TABLE `favourites` DISABLE KEYS */;
/*!40000 ALTER TABLE `favourites` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `free_attribute`
--

DROP TABLE IF EXISTS `free_attribute`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `free_attribute` (
  `attribute_id` char(30) NOT NULL,
  `customer_id` char(30) NOT NULL,
  `attribute_title` char(20) NOT NULL,
  `attribute_content` char(20) NOT NULL,
  PRIMARY KEY (`attribute_id`),
  KEY `customer_id` (`customer_id`),
  CONSTRAINT `free_attribute_ibfk_1` FOREIGN KEY (`customer_id`) REFERENCES `merchant_inf` (`customer_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `free_attribute`
--

LOCK TABLES `free_attribute` WRITE;
/*!40000 ALTER TABLE `free_attribute` DISABLE KEYS */;
/*!40000 ALTER TABLE `free_attribute` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `login`
--

DROP TABLE IF EXISTS `login`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `login` (
  `customer_id` char(10) NOT NULL,
  `username` char(10) NOT NULL,
  `password` char(15) NOT NULL,
  `customer_stats` char(30) DEFAULT NULL,
  `modified_time` char(10) DEFAULT NULL,
  `is_staff` tinyint(1) DEFAULT NULL,
  `status` char(20) DEFAULT NULL,
  PRIMARY KEY (`customer_id`),
  UNIQUE KEY `customer_id` (`customer_id`),
  UNIQUE KEY `username` (`username`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `login`
--

LOCK TABLES `login` WRITE;
/*!40000 ALTER TABLE `login` DISABLE KEYS */;
/*!40000 ALTER TABLE `login` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `merchant_inf`
--

DROP TABLE IF EXISTS `merchant_inf`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `merchant_inf` (
  `customer_id` char(30) NOT NULL,
  `bank_name` char(20) DEFAULT NULL,
  `bank_account` char(20) DEFAULT NULL,
  PRIMARY KEY (`customer_id`),
  UNIQUE KEY `customer_id` (`customer_id`),
  CONSTRAINT `merchant_inf_ibfk_1` FOREIGN KEY (`customer_id`) REFERENCES `customer_inf` (`customer_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `merchant_inf`
--

LOCK TABLES `merchant_inf` WRITE;
/*!40000 ALTER TABLE `merchant_inf` DISABLE KEYS */;
/*!40000 ALTER TABLE `merchant_inf` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `order_master`
--

DROP TABLE IF EXISTS `order_master`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `order_master` (
  `order_sn` char(30) NOT NULL,
  `customer_id` char(30) NOT NULL,
  `recipient_name` char(10) NOT NULL,
  `province` char(10) NOT NULL,
  `city` char(10) NOT NULL,
  `address` char(50) NOT NULL,
  `payment_type` char(10) NOT NULL,
  `order_money` int DEFAULT NULL,
  `discount_money` int DEFAULT NULL,
  `shipping_money` int DEFAULT NULL,
  `payment_money` int DEFAULT NULL,
  `shipping_comp_name` char(20) NOT NULL,
  `shipping_sn` char(30) NOT NULL,
  `create_time` char(20) NOT NULL,
  `shipping_time` char(20) NOT NULL,
  `pay_time` char(20) NOT NULL,
  `order_point` int NOT NULL,
  `invoice_title` char(30) NOT NULL,
  PRIMARY KEY (`order_sn`),
  UNIQUE KEY `order_sn` (`order_sn`,`shipping_sn`,`invoice_title`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `order_master`
--

LOCK TABLES `order_master` WRITE;
/*!40000 ALTER TABLE `order_master` DISABLE KEYS */;
/*!40000 ALTER TABLE `order_master` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `order_product`
--

DROP TABLE IF EXISTS `order_product`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `order_product` (
  `order_id` char(30) NOT NULL,
  `product_id` char(30) NOT NULL,
  `discount_money` float DEFAULT NULL,
  UNIQUE KEY `order_id` (`order_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `order_product`
--

LOCK TABLES `order_product` WRITE;
/*!40000 ALTER TABLE `order_product` DISABLE KEYS */;
/*!40000 ALTER TABLE `order_product` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `product_cart`
--

DROP TABLE IF EXISTS `product_cart`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `product_cart` (
  `cart_id` char(30) NOT NULL,
  `customer_id` char(20) NOT NULL,
  `product_id` char(20) NOT NULL,
  `product_amount` int NOT NULL,
  `add_time` char(20) DEFAULT NULL,
  PRIMARY KEY (`cart_id`),
  UNIQUE KEY `cart_id` (`cart_id`),
  KEY `product_id` (`product_id`),
  CONSTRAINT `product_cart_ibfk_1` FOREIGN KEY (`product_id`) REFERENCES `product_inf` (`product_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `product_cart`
--

LOCK TABLES `product_cart` WRITE;
/*!40000 ALTER TABLE `product_cart` DISABLE KEYS */;
/*!40000 ALTER TABLE `product_cart` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `product_category`
--

DROP TABLE IF EXISTS `product_category`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `product_category` (
  `category_id` char(30) NOT NULL,
  `category_name` char(30) NOT NULL,
  `parent_id` char(30) DEFAULT NULL,
  `category_level` int DEFAULT NULL,
  `status` char(20) DEFAULT NULL,
  PRIMARY KEY (`category_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `product_category`
--

LOCK TABLES `product_category` WRITE;
/*!40000 ALTER TABLE `product_category` DISABLE KEYS */;
/*!40000 ALTER TABLE `product_category` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `product_comment`
--

DROP TABLE IF EXISTS `product_comment`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `product_comment` (
  `comment_id` char(30) NOT NULL,
  `product_id` char(20) NOT NULL,
  `order_id` char(20) DEFAULT NULL,
  `customer_id` char(20) NOT NULL,
  `title` char(20) DEFAULT NULL,
  `content` char(250) NOT NULL,
  `audit_time` char(20) DEFAULT NULL,
  PRIMARY KEY (`comment_id`),
  UNIQUE KEY `comment_id` (`comment_id`),
  KEY `product_id` (`product_id`),
  KEY `customer_id` (`customer_id`),
  CONSTRAINT `product_comment_ibfk_1` FOREIGN KEY (`product_id`) REFERENCES `product_inf` (`product_id`),
  CONSTRAINT `product_comment_ibfk_2` FOREIGN KEY (`customer_id`) REFERENCES `login` (`customer_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `product_comment`
--

LOCK TABLES `product_comment` WRITE;
/*!40000 ALTER TABLE `product_comment` DISABLE KEYS */;
/*!40000 ALTER TABLE `product_comment` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `product_inf`
--

DROP TABLE IF EXISTS `product_inf`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `product_inf` (
  `product_id` char(30) NOT NULL,
  `product_name` char(20) NOT NULL,
  `brand_id` char(30) DEFAULT NULL,
  `category_id` char(30) NOT NULL,
  `customer_id` char(20) NOT NULL,
  `price` int DEFAULT NULL,
  `publish_status` tinyint(1) NOT NULL,
  `weight` float DEFAULT NULL,
  `length` float DEFAULT NULL,
  `height` float DEFAULT NULL,
  `width` float DEFAULT NULL,
  `color` char(15) DEFAULT NULL,
  `production_date` char(30) NOT NULL,
  `shelf_life` char(20) DEFAULT NULL,
  `description` char(100) DEFAULT NULL,
  `amout` int NOT NULL,
  PRIMARY KEY (`product_id`),
  KEY `fk_brand_inf` (`brand_id`),
  KEY `fk_product_category` (`category_id`),
  CONSTRAINT `fk_brand_inf` FOREIGN KEY (`brand_id`) REFERENCES `brand_inf` (`brand_id`),
  CONSTRAINT `fk_product_category` FOREIGN KEY (`category_id`) REFERENCES `product_category` (`category_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `product_inf`
--

LOCK TABLES `product_inf` WRITE;
/*!40000 ALTER TABLE `product_inf` DISABLE KEYS */;
/*!40000 ALTER TABLE `product_inf` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `product_pic`
--

DROP TABLE IF EXISTS `product_pic`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `product_pic` (
  `product_pic_id` char(30) NOT NULL,
  `product_id` char(30) NOT NULL,
  `pic_desc` char(30) DEFAULT NULL,
  `pic_url` char(30) DEFAULT NULL,
  `pic_order` char(30) DEFAULT NULL,
  PRIMARY KEY (`product_pic_id`),
  UNIQUE KEY `product_pic_id` (`product_pic_id`,`product_id`),
  KEY `product_id` (`product_id`),
  CONSTRAINT `product_pic_ibfk_1` FOREIGN KEY (`product_id`) REFERENCES `product_inf` (`product_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `product_pic`
--

LOCK TABLES `product_pic` WRITE;
/*!40000 ALTER TABLE `product_pic` DISABLE KEYS */;
/*!40000 ALTER TABLE `product_pic` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `staff_inf`
--

DROP TABLE IF EXISTS `staff_inf`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `staff_inf` (
  `customer_id` char(10) NOT NULL,
  PRIMARY KEY (`customer_id`),
  UNIQUE KEY `customer_id` (`customer_id`),
  CONSTRAINT `staff_inf_ibfk_1` FOREIGN KEY (`customer_id`) REFERENCES `login` (`customer_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `staff_inf`
--

LOCK TABLES `staff_inf` WRITE;
/*!40000 ALTER TABLE `staff_inf` DISABLE KEYS */;
/*!40000 ALTER TABLE `staff_inf` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2020-06-16 17:56:06
