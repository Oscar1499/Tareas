-- phpMyAdmin SQL Dump
-- version 4.8.3
-- https://www.phpmyadmin.net/
--
-- Servidor: 127.0.0.1:3306
-- Tiempo de generación: 18-11-2018 a las 10:57:05
-- Versión del servidor: 5.7.23
-- Versión de PHP: 7.2.10

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de datos: `practica2`
--

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `clientes`
--

DROP TABLE IF EXISTS `clientes`;
CREATE TABLE IF NOT EXISTS `clientes` (
  `CodCliente` int(11) NOT NULL,
  `Nombre` varchar(150) COLLATE utf8_spanish2_ci NOT NULL,
  `Apellido` varchar(150) COLLATE utf8_spanish2_ci NOT NULL,
  `Telefono` varchar(10) COLLATE utf8_spanish2_ci NOT NULL,
  `DIreccion` varchar(150) COLLATE utf8_spanish2_ci NOT NULL,
  `Correo` varchar(100) COLLATE utf8_spanish2_ci NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8 COLLATE=utf8_spanish2_ci;

--
-- Volcado de datos para la tabla `clientes`
--

INSERT INTO `clientes` (`CodCliente`, `Nombre`, `Apellido`, `Telefono`, `DIreccion`, `Correo`) VALUES
(1, 'Oscar Alexis', 'Palacios Flores', '34983944', '14542', '234523532'),
(2, 'Julian Jose', 'Granados Portillo', '252342545', '245232452', '23542452'),
(3, 'Pedro Alexander', 'Granados Reyes', '78127919', 'Colonia prado', 'gersonsdao@gmail.com'),
(4, 'Gerardo Jose', 'Gonzales Portillo', '78437462', 'Colonia Nueva Granada', 'gerarado9382@gmail.com');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `cotizacion`
--

DROP TABLE IF EXISTS `cotizacion`;
CREATE TABLE IF NOT EXISTS `cotizacion` (
  `CodCotizacion` int(11) NOT NULL,
  `CodProducto` varchar(200) COLLATE utf8_spanish2_ci NOT NULL,
  `CodCliente` varchar(200) COLLATE utf8_spanish2_ci NOT NULL,
  `FechaCotizacion` varchar(100) COLLATE utf8_spanish2_ci NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8 COLLATE=utf8_spanish2_ci;

--
-- Volcado de datos para la tabla `cotizacion`
--

INSERT INTO `cotizacion` (`CodCotizacion`, `CodProducto`, `CodCliente`, `FechaCotizacion`) VALUES
(1, '1', '1', '12/12/18'),
(2, '2', '2', '13/12/18'),
(3, '3', '4', '14/12/18'),
(4, '4', '4', '15/12/18');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `productos`
--

DROP TABLE IF EXISTS `productos`;
CREATE TABLE IF NOT EXISTS `productos` (
  `CodProducto` int(11) NOT NULL,
  `Nombre` varchar(300) COLLATE utf8_spanish2_ci NOT NULL,
  `Precio` varchar(50) COLLATE utf8_spanish2_ci NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=utf8 COLLATE=utf8_spanish2_ci;

--
-- Volcado de datos para la tabla `productos`
--

INSERT INTO `productos` (`CodProducto`, `Nombre`, `Precio`) VALUES
(1, 'Oscar Alexis Palacios Flores', '29'),
(2, 'Oscar Alexis Palacios FLores', '23'),
(3, 'Sal el Genio', '0.10'),
(4, 'Chololates bomobom', '0.25');
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
