<?php

function tb_ticket_geolocation_parse_info(){
  $smart_ip_session = smart_ip_session_get('smart_ip');
  $response = array('country' => 'CA', 'state' => 'AB');
  if(isset($smart_ip_session['location'])){
    // Country.
    if(isset($smart_ip_session['location']['country_code'])){
      $response['country'] = $smart_ip_session['location']['country_code'];
    }elseif(isset($smart_ip_session['location']['country'])){
      switch($smart_ip_session['location']['country']){
        case 'Canada':
          $response['country'] = 'CA';
          break;
        case 'United States':
          $response['country'] = 'US';
          // If state detection will have no results we will choose first state by default.
          $response['state'] = 'AL';
          break;
      }
    }
    
    // State/Province.
    if(isset($smart_ip_session['location']['region'])){
      $key = array_search($smart_ip_session['location']['region'], array_merge(tb_ticket_geolocation_canada_provinces(), tb_ticket_geolocation_usa_states()));
      if($key !== false){
        $response['state'] = $key;
      }
    }
  }
  
  return $response;
}





function tb_ticket_geolocation_canada_provinces(){
  return array(
    'AB' => t('Alberta'),
    'BC' => t('British Columbia'),
    'MB' => t('Manitoba'),
    'NB' => t('New Brunswick'),
    'NL' => t('Newfoundland and Labrador'),
    'NT' => t('Northwest Territories'),
    'NS' => t('Nova Scotia'),
    'NU' => t('Nunavut'),
    'ON' => t('Ontario'),
    'PE' => t('Prince Edward Island'),
    'QC' => t('Quebec'),
    'SK' => t('Saskatchewan'),
    'YT' => t('Yukon Territory'),
  );
}

function tb_ticket_geolocation_usa_states(){
  return array(
    'AL' => t('Alabama'),
    'AK' => t('Alaska'),
    'AZ' => t('Arizona'),
    'AR' => t('Arkansas'),
    'CA' => t('California'),
    'CO' => t('Colorado'),
    'CT' => t('Connecticut'),
    'DE' => t('Delaware'),
    'DC' => t('District Of Columbia'),
    'FL' => t('Florida'),
    'GA' => t('Georgia'),
    'HI' => t('Hawaii'),
    'ID' => t('Idaho'),
    'IL' => t('Illinois'),
    'IN' => t('Indiana'),
    'IA' => t('Iowa'),
    'KS' => t('Kansas'),
    'KY' => t('Kentucky'),
    'LA' => t('Louisiana'),
    'ME' => t('Maine'),
    'MD' => t('Maryland'),
    'MA' => t('Massachusetts'),
    'MI' => t('Michigan'),
    'MN' => t('Minnesota'),
    'MS' => t('Mississippi'),
    'MO' => t('Missouri'),
    'MT' => t('Montana'),
    'NE' => t('Nebraska'),
    'NV' => t('Nevada'),
    'NH' => t('New Hampshire'),
    'NJ' => t('New Jersey'),
    'NM' => t('New Mexico'),
    'NY' => t('New York'),
    'NC' => t('North Carolina'),
    'ND' => t('North Dakota'),
    'OH' => t('Ohio'),
    'OK' => t('Oklahoma'),
    'OR' => t('Oregon'),
    'PA' => t('Pennsylvania'),
    'RI' => t('Rhode Island'),
    'SC' => t('South Carolina'),
    'SD' => t('South Dakota'),
    'TN' => t('Tennessee'),
    'TX' => t('Texas'),
    'UT' => t('Utah'),
    'VT' => t('Vermont'),
    'VA' => t('Virginia'),
    'WA' => t('Washington'),
    'WV' => t('West Virginia'),
    'WI' => t('Wisconsin'),
    'WY' => t('Wyoming'),
    'AA' => t('Armed Forces (Americas)'),
    'AE' => t('Armed Forces (Europe, Canada, Middle East, Africa)'),
    'AP' => t('Armed Forces (Pacific)'),
    'AS' => t('American Samoa'),
    'FM' => t('Federated States of Micronesia'),
    'GU' => t('Guam'),
    'MH' => t('Marshall Islands'),
    'MP' => t('Northern Mariana Islands'),
    'PW' => t('Palau'),
    'PR' => t('Puerto Rico'),
    'VI' => t('Virgin Islands'),
  );
}